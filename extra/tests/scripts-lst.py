#!/usr/bin/env python3
# coding: utf-8

import sys
import re

scripts_h = sys.argv[1]
scripts_lst = sys.argv[2]

h_by_num = {} # num > name
h_by_name = {} # name > num
lst_by_num = {} # linenum > name
lst_by_name = {} # name > linenum

with open(scripts_h) as f:
  for line in f:
    match = re.match(r"^#define\s+SCRIPT_(\w+)\s+\((\d+)\)\s+.*", line)
    if match:
      h_by_num[int(match[2])] = match[1]
      h_by_name[match[1]] = int(match[2])

with open(scripts_lst) as f:
  linenum = 0
  for line in f:
    linenum += 1
    scr = line.split('.', maxsplit=1)[0].upper()
    lst_by_num[linenum] = scr
    lst_by_name[scr] = linenum

# search dupes in scripts.lst
lst_names = [lst_by_num[x] for x in lst_by_num]
lst_duped_names = sorted(set([x for x in lst_names if lst_names.count(x) > 1]))
for n in lst_duped_names:
  duped_lines = [x for x in lst_by_num if lst_by_num[x] == n]
  dupes_str = ", ".join([str(x) for x in duped_lines])
  print("Dupe: {} is defined on lines {} in scripts.lst".format(n, dupes_str))

# search mismatched names and missing scripts.h defines
warning = False
for i in range(1, len(lst_by_num)):
  try:
    if lst_by_num[i] != h_by_num[i]:
      print("Mismatch: scripts.lst {}, scripts.h {}".format(lst_by_num[i], h_by_num[i]))
      warning = True
  except:
    if lst_by_num[i] not in h_by_name:
      print("Missing: script {}.int, line number {} in scripts.lst is absent from scripts.h".format(lst_by_num[i], i))
      warning = True

if warning:
  sys.exit(1)
