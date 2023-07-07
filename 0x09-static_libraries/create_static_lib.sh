#!/bin/bash
gcc -Wall -pedantic -Werroe -Wextra -C *.c
ar -rc liball.a *.o
ranlib liball.a
