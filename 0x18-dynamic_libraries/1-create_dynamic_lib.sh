#!/bin/bash
for i in *.c
do
    gcc -g3 -o3 "$i" -o "${i%.c}.out"
done
