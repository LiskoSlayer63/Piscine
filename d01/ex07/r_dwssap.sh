#!/bin/bash
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d':' -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/.\{2\}$/./' | tr -d '\n'
