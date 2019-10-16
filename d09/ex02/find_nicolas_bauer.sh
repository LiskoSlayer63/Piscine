#!bin/sh
grep -i "^Nicolas\tBauer" $1 | awk '{print $(NF-1)}'
