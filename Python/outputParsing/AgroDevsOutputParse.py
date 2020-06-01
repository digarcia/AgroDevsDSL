# -*- coding: utf-8 -*-
"""
Created on Mon Jun  1 16:34:03 2020

@author: Diego.Garcia
"""

import os
import pandas as pd

AGRODEVS_OUTPUT_DIR='./output'
OUTPUT_PARSER_RESULTS_DIR='./output'
DRAWLOG_FILE_EXTENSION='.drw'

AGRODEVS_PREFIX="agro_"

def filterDrawLogFiles(fileName, dirName = OUTPUT_PARSER_RESULTS_DIR):
   if os.path.isfile(dirName+"/"+fileName) and  fileName.endswith(DRAWLOG_FILE_EXTENSION):
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
  
#Parsing agrodevs drawlog files.
print("Parsing agrodevs drawlog file:")  
for drw_file in agrodevs_drw_output_files:
    print(" Processing  "+drw_file)
    puerto = remove_prefix (drw_file,AGRODEVS_PREFIX)
    f = open(OUTPUT_PARSER_RESULTS_DIR+"/"+drw_file, "r")
    print(" Opening  "+drw_file)
    for linea in f:
        if (linea[0:4]== 'Line'):
            time = linea[-13:-1]
            print(drw_file+" Line Header "+time)
    
    f.close()