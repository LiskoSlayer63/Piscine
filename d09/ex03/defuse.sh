#!bin/sh
touch -A -000001 bomb.txt | stat -f %a bomb.txt
