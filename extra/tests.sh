#!/bin/bash

set -xeu -o pipefail

./extra/tests/scripts-lst.py scripts_src/headers/scripts.h data/scripts/scripts.lst
./extra/tests/lvars.py data/scripts/scripts.lst scripts_src
