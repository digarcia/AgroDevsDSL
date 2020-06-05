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

AGRODEVS_SKIP_PORTS=["etapa"]

AGRODEVS_LINES=10
AGRODEVS_COLUMNS=10

CELL_DEVS_EXTERNAL_EVENT_BEGIN='in_m_'
CELL_DEVS_EXTERNAL_EVENT_ENDS='done_m_'

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

current_test="test1"    
        
#generate_val_file(current_test,AGRODEVS_LINES,AGRODEVS_COLUMNS)    
generate_ev_file(current_test)

