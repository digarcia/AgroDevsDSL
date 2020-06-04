# -*- coding: utf-8 -*-
"""
Created on Mon Jun  1 16:34:03 2020

@author: Diego.Garcia
"""

import os
#from io import StringIO
#import csv
import pandas as pd

AGRODEVS_OUTPUT_DIR='./output/'
OUTPUT_PARSER_RESULTS_DIR='./outputResults/'
DRAWLOG_FILE_EXTENSION='.drw'

AGRODEVS_PREFIX="agro_"

AGRODEVS_SKIP_PORTS=["etapa"]

AGRODEVS_LINES=10
AGRODEVS_COLUMNS=10


def filterDrawLogFiles(fileName, dirName = AGRODEVS_OUTPUT_DIR):
   if os.path.isfile(dirName+fileName) and  fileName.endswith(DRAWLOG_FILE_EXTENSION):
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




agrodevs_output_files = os.listdir(AGRODEVS_OUTPUT_DIR)
print(agrodevs_output_files)

#files = [f for f in os.listdir(AGRODEVS_OUTPUT_DIR) if os.path.isfile(f)]
for f in agrodevs_output_files:
  print (f+" is drawlog:"+str(filterDrawLogFiles(f)))
  
agrodevs_drw_output_files=tuple(filter(filterDrawLogFiles,agrodevs_output_files))

print("agrodevs_drw_output_files:")  
#printArray(agrodevs_drw_output_files)
for drw_file in agrodevs_drw_output_files:
    print (drw_file)

print("agrodevs_drw_output_files2:")  
for drw_file in agrodevs_drw_output_files:
    print (drw_file)
  
    
#def processAgroDevsDrwPandas(agrodevs_drw_files,filas, columnas):  
#    #Parsing agrodevs drawlog files.
#    print("Parsing agrodevs drawlog file:") 
#    #for drw_file in agrodevs_drw_files:
#    drw_file=agrodevs_drw_files[0]
#    df= pd.read_csv(OUTPUT_PARSER_RESULTS_DIR+"/"+drw_file,header= None)
#    df_2= df.iloc[(df.loc[df[0]=='Line'].index[0]+1):, :].reset_index(drop = True)
 
    
def obtieneDatos(linea):
    print("Processing single line")
    arreglo_datos=linea.split()
    print("Line as array"+str(arreglo_datos))
    return arreglo_datos
    
    
def processAgroDevsDrwFiles(id_test, agrodevs_drw_files,filas, columnas):   
    #Parsing agrodevs drawlog files.
    print("Parsing agrodevs drawlog file:")  
    groupedData_columns=['id_test','id_puerto','fila','columna','tiempo','valor']
    agroDevsExDF = pd.DataFrame(columns=groupedData_columns)
    for drw_file in agrodevs_drw_files:
        #drw_file=agrodevs_drw_files[0]
        #drw_file='agro_lu1.drw'
        print(" Processing  "+drw_file)
        puerto = remove_sufix(remove_prefix(drw_file,AGRODEVS_PREFIX),DRAWLOG_FILE_EXTENSION)
        if puerto in AGRODEVS_SKIP_PORTS:
            #This port is internal, should not be in the output
            print("Skiping "+puerto+" internal port")
            continue
        
        f = open(AGRODEVS_OUTPUT_DIR+drw_file, "r")
        print(" Opening  "+drw_file)
        for linea in f:
            if (linea[0:4]== 'Line'):
                time = linea[-13:-1]
                print(drw_file+" Line Header "+time)
                # discard the empty header lines
            next(f)
            next(f)
            #TODO:Ver si se puede skipear automaticamente hasta el +----
            #Inicializa agrupador_resultados con los headers
            agrupador_resultados=[]
           
            fila=0
            for linea_grilla in f:
                fila=fila+1
                if (fila <= filas):
                        print("linea_grilla nro("+str(fila)+") de ("+str(filas)+"): "+linea_grilla)
                    		#$inicio			= strpos($linea, '|');
								#$fin			= strrpos($linea, '|');
								#$total			= strlen($linea) - $inicio - (strlen($linea) - $fin) - 1;
								#$linea 			= substr($linea, $inicio+1, $total);
								#$datos_columnas	= $this->obtiene_datos($linea);
                        inicio =    linea_grilla.find('|')   
                        fin =       linea_grilla.rfind('|')  
                        linea_grilla_data = linea_grilla[inicio+1:fin]
                        print("linea_grilla_data pos:"+str(inicio)+" "+str(fin))
                        print("linea_grilla_data:"+linea_grilla_data)
                        datos_columnas=obtieneDatos(linea_grilla_data)
                        if(len(datos_columnas)==columnas):
                            print("Processing column data")
                            columna=0
                            for dato in datos_columnas:
                                columna=columna+1
                                test_contenido = [id_test,puerto,fila,columna,time,dato]
                                agrupador_resultados=agrupador_resultados+[test_contenido]
                            #df1.append(df2, ignore_index = True) 
                        else:
                            print("ERR: Different quantity of columns, time:"+time+" line:"+str(fila))
                    
                else:
                    break
            
            #print("Grouped table data id_test:"+id_test+" puerto"+puerto)
            #print(agrupador_resultados)
            #Convert Groupped table data to pandas dataFrame
            grouppedDataDF=pd.DataFrame(agrupador_resultados,columns=groupedData_columns)
            print("Grouped table dataFrame id_test:"+id_test+" puerto"+puerto)\
            #output=grouppedDataDF.to_string(max_rows=None)
            display(grouppedDataDF)
            agroDevsExDF = agroDevsExDF.append(grouppedDataDF,ignore_index=True)
            #display(agroDevsExDF)
            #break
            next(f)           
        
        
        f.close()
    display(agroDevsExDF)
    agroDevsExDF.to_csv(OUTPUT_PARSER_RESULTS_DIR+id_test+"_results.csv",index=False)
    
processAgroDevsDrwFiles("test1",agrodevs_drw_output_files,AGRODEVS_LINES,AGRODEVS_COLUMNS)