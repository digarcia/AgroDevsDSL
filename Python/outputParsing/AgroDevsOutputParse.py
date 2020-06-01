# -*- coding: utf-8 -*-
"""
Created on Mon Jun  1 16:34:03 2020

@author: Diego.Garcia
"""

import os

AGRODEVS_OUTPUT_DIR='./output'
OUTPUT_PARSER_RESULTS_DIR='./output'
DRAWLOG_FILE_EXTENSION='.drw'

def filterDrawLogFiles(fileName, dirName = OUTPUT_PARSER_RESULTS_DIR):
   if os.path.isfile(dirName+"/"+fileName) and  fileName.endswith(DRAWLOG_FILE_EXTENSION):
      return True
   else:
      return False


agrodevs_output_files = os.listdir(AGRODEVS_OUTPUT_DIR)
print(agrodevs_output_files)

#files = [f for f in os.listdir(AGRODEVS_OUTPUT_DIR) if os.path.isfile(f)]
for f in agrodevs_output_files:
  print (f+" is drawlog:"+str(filterDrawLogFiles(f)))
  
agrodevs_drw_output_files=filter(filterDrawLogFiles,agrodevs_output_files)

print("agrodevs_drw_output_files:")  
for drw_file in agrodevs_drw_output_files:
    print (drw_file)
  
