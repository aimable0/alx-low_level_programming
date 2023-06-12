#!/bin/bash
for file in *.c
do
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c "$file"
done
ar -rc liball.a *.o
ranlib liball.a

