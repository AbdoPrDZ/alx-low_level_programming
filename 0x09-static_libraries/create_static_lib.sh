#!/bin/bash

c_files=$(find . -type f -name "*.c" ! -name "main.c")

for file in $c_files; do
    gcc -c "$file"
done

ar rcs liball.a *.o