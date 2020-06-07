# -*- coding: utf-8 -*-
"""
Created on Mon Jun  1 16:34:03 2020

@author: Diego.Garcia
"""

import os
import io
import csv
#from io import StringIO
#import csv
import pandas as pd

AGRODEVS_INPUT_DIR='./inputFiles/'
INPUT_PARSER_RESULTS_DIR='./generatedIniFiles/'
CSV_FILE_EXTENSION='.csv'

AGRODEVS_PREFIX="agro_"



AGRODEVS_LINES=10
AGRODEVS_COLUMNS=10

#for generate_ev_file
CELL_DEVS_EXTERNAL_EVENT_BEGIN='in_m_'
CELL_DEVS_EXTERNAL_EVENT_ENDS='done_m_'

#for generate_inicialization_file
AGRODEVS_INTERNAL_USAGE_PORTS=["etapa"]
DEFAULT_INITIAL_CELL_VALUE= -0.5



def filterCSVFiles(fileName, dirName = AGRODEVS_INPUT_DIR):
   if os.path.isfile(dirName+fileName) and  fileName.endswith(CSV_FILE_EXTENSION):
      return True
   else:
      return False

def printArray(array):
    for element in array:
        print(element)
        
def remove_prefix(text, prefix):
    if text.startswith(prefix):
        return text[len(prefix):]
    return text  # or whatever

def remove_sufix(text, sufix):
    if text.endswith(sufix):
        return text[:-len(sufix)]
    return text  # or whatever




agrodevs_input_files = os.listdir(AGRODEVS_INPUT_DIR)
print(agrodevs_input_files)

for f in agrodevs_input_files:
  print (f+" is csv:"+str(filterCSVFiles(f)))
  
agrodevs_csv_input_files=tuple(filter(filterCSVFiles,agrodevs_input_files))

print("agrodevs_csv_input_files:")  
for csv_file in agrodevs_csv_input_files:
    print (csv_file)


def generate_val_file(id_test,lines,columns):
    """
    generate val file (id_test.val) with inital value for each agent
    
    Parameters
    ----------
    id_test : str
    lines : int
    columns : int
    """
    print("generate_val_file")
    val_file_name=id_test+".val"
    f = io.open(INPUT_PARSER_RESULTS_DIR+val_file_name, "w",newline='\n')
    inverse_count=0
    for line in range(0,lines):
        for column in range(0,columns):
            inverse_count=inverse_count-1
            print("(line,column)=("+str(line)+","+str(column)+")")
            f.write("("+str(line)+","+str(column)+") = "+str(inverse_count)+"\n")
    f.close()        
            

def generate_ev_file(id_test):
    """
    generate event file (id_test.ev) based on an event csv descripcion
    Allows several external events (but must be supported by the ma model)
    
    
    Parameters
    ----------
    id_test : str
    """
    print("generate_ev_file")
      
    ev_output_file_name=id_test+".ev"
    ev_input_file_name=id_test+"_events.csv"
    f_output = io.open(INPUT_PARSER_RESULTS_DIR+ev_output_file_name, "w",newline='\n')
    f_input = io.open(AGRODEVS_INPUT_DIR+ev_input_file_name, "r")
    
    input_reader = csv.reader(f_input, delimiter=',')
    field_names_list = next(input_reader)
    if (field_names_list[0]!="campaign"):
        print("First field of events file input should be 'campaing' but is:"+field_names_list[0])
        print("Cannot generate event file")
        return
    else:
        print(field_names_list)
        for line in input_reader:
            #generate timestamp for campaign
            #campania = int(int(ms)/100)+int(ss)*10+int(mm)*600+int(hh)*36000
            campaign = int(line[0])
            ms = (campaign*100)%1000
            ss = ((campaign*100)//1000)%60
            mm = ((campaign*100)//60000)%60
            hh = ((campaign*100)//360000)
            timeFormat = "{:0>2d}"
            msFormat = "{:0>3d}"
            timestamp_begin_event = str(timeFormat.format(hh))+":"+ \
                        str(timeFormat.format(mm))+":"+ \
                        str(timeFormat.format(ss))+":"+ \
                        str(msFormat.format(ms))
            timestamp_end_event = str(timeFormat.format(hh))+":"+ \
                        str(timeFormat.format(mm))+":"+ \
                        str(timeFormat.format(ss))+":"+ \
                        str(msFormat.format(ms+1))
                         
            print("timestamp generated:   "+timestamp_begin_event)
        
            #generate events
            #begin events
            
            
            port_idx =0
            for event_port in line[1:]:
                port_idx=port_idx+1
                #print("processing port: "+str(field_names_list[port_idx]))
                begin_event=CELL_DEVS_EXTERNAL_EVENT_BEGIN+ \
                            field_names_list[port_idx]+ \
                            " "+str(line[port_idx])
                
                f_output.write(timestamp_begin_event+" "+begin_event+"\n")
            
            #end events
            port_idx=0
            for event_port in line[1:]:
                port_idx=port_idx+1
                #print("processing port: "+str(field_names_list[port_idx]))
                end_event=CELL_DEVS_EXTERNAL_EVENT_ENDS+ \
                          field_names_list[port_idx]+ \
                          " "+str(line[port_idx])
                f_output.write(timestamp_end_event+" "+end_event+"\n")
            
            
            
    f_input.close()
    f_output.close()

def generate_inicialization_file(id_test,lines,columns):
    """
    generate event file (inicializacion.inc) based on cell content csv input
    Allows dinamic definitions of input variables(ports)
    (but must be supported by the ma model)
    
    
    Parameters
    ----------
    id_test : str
    lines : int
    columns : int    
    """
  
    def _generate_cell_initialization(outputFile,inputLine,fieldNames):
        print("_generate_cell_initialization")
        outputFile.write("\n")
        outputFile.write("rule : { \n")
        port_idx =0
        for fieldName in fieldNames[1:]:
            port_idx=port_idx+1
            print("Writing "+str(fieldName+" for agent "+str(inputLine[0])))
            outputFile.write("\t\t~"+str(fieldName)+"\t\t:= "+str(inputLine[port_idx].strip())+";\n")
    
        outputFile.write("    } \n")
        outputFile.write("     0 \n")
        outputFile.write("    { \n")
        outputFile.write("\t\t(0,0)~"+fieldNames[1]+"\t = -"+ \
                         str(inputLine[0])+"\n")
                         #str(DEFAULT_INITIAL_CELL_VALUE))
        outputFile.write("    } \n")
        #outputFile.write()
    
    
    print("generate_inicialization_file")
    initialization_output_file_name="inicializacion.inc"
    initialization_input_file_name=id_test+"_initialization.csv"
    f_output = io.open(INPUT_PARSER_RESULTS_DIR+initialization_output_file_name, "w",newline='\n')
    f_input = io.open(AGRODEVS_INPUT_DIR+initialization_input_file_name, "r")
    
    input_reader = csv.reader(f_input, delimiter=',')
    field_names_list = next(input_reader)
    if (field_names_list[0]!="agent"):
        print("First field of inicialization input file should be 'agent' but is:"+field_names_list[0])
        print("Cannot generate inicialization file for AgroDevs")
        return
    else:
        print(field_names_list)
        #Write macro header line
        f_output.write("#BeginMacro(inicializar) \n")
                       
        for line in input_reader:
            if (line[0]=="default"):
                #generate default cell initialization
                print("generating default cell initialization")
            else:
                #generate agent cell initialization
                #print("generate agent cell initialization")
                _generate_cell_initialization(f_output,line,field_names_list)
                
        f_output.write("#EndMacro \n")    
    f_input.close()
    f_output.close()      



current_test="test1"    
        
#generate_val_file(current_test,AGRODEVS_LINES,AGRODEVS_COLUMNS)    
#generate_ev_file(current_test)
generate_inicialization_file(current_test,AGRODEVS_LINES,AGRODEVS_COLUMNS)   
