# -*- coding: utf-8 -*-
"""
Created on Mon Jun  1 16:34:03 2020

@author: Diego.Garcia
"""

import os
import io
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
    print("generateValFile")
    val_file_name=id_test+".val"
    f = io.open(INPUT_PARSER_RESULTS_DIR+val_file_name, "w",newline='\n')
    inverse_count=0
    for line in range(0,lines):
        for column in range(0,columns):
            inverse_count=inverse_count-1
            print("(line,column)=("+str(line)+","+str(column)+")")
            f.write("("+str(line)+","+str(column)+") = "+str(inverse_count)+"\n")
    f.close()        
            

current_test="test1"    
        
generate_val_file(current_test,AGRODEVS_LINES,AGRODEVS_COLUMNS)    

#processAgroDevsDrwFiles("test1",agrodevs_drw_output_files,AGRODEVS_LINES,AGRODEVS_COLUMNS)