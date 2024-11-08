#!/bin/bash
cat /etc/passwd | sed 's/:.*//' | sed '/$FT_LINE1/,/$FT_LINE2/d' | awk '(NR%2)==0' | rev | sort -d -r | awk '{print}' ORS=', ' | sed 's/. $/./' 
