#!/usr/bin/env python3
# coding: utf-8

# checks if there are enough lvars allowed in scripts.lst

import sys
import re
import os

scripts_lst = sys.argv[1]
scripts_dir = sys.argv[2]

lvars = {}

with open(scripts_lst) as f:
  linenum = 0
  for line in f:
    linenum += 1
    match = re.match(r"^(\w+)\.int.*local_vars=(\d+)", line)
    name = match[1].lower()
    num_lvars = int(match[2])
    if not name in lvars: # scripts.lst uses first entry
      lvars[name] = num_lvars

def get_max_lvar(fpath):
  max_lvar = 0
  with open(fpath) as f:
    for line in f:
      match = re.match(r"^#define\s+LVAR_\w+\s+\((\d+)\)\s+.*", line)
      if match:
        cur_lvar = int(match[1])
        if cur_lvar > max_lvar:
          max_lvar = cur_lvar
  return max_lvar

for dir_name, subdir_list, file_list in os.walk(scripts_dir, topdown=False):
  for file_name in file_list:
    if file_name.endswith(".ssl"):
      path = os.path.join(dir_name, file_name)
      max_lvar = get_max_lvar(path)
      script_name = os.path.splitext(file_name)
      if script_name in lvars and lvars[script_name] < max_lvar:
        print("Script {} has {} LVARs defined, but scripts.lst only allows {}.".format(script_name, max_lvar, lvars[script_name]))
        sys.exit(1)
