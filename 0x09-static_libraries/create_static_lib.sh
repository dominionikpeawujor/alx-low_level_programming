#!/bin/bash

# Compile each .c file into a corresponding .o file
for file in *.c; do
    if [ -f "$file" ]; then
        gcc -c "$file" -o "${file%.c}.o"
    fi
done

# Create the static library (liball.a) from all the .o files
ar rcs liball.a *.o

# Clean up the temporary .o files
rm -f *.o

echo "Static library liball.a created successfully."
