#!/bin/bash

ls -l -1 | sed -n 'p;n'
# ou | awk '(NR%2)==0'
