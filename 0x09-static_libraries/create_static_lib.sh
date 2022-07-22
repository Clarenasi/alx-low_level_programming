#!/bin/bash
gcc -c *.c
ar rcs linall.a *.o
ranlib liball.a
