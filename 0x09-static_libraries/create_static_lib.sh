#!/bin/bash
gcc -C *.c
ar rc liball.a *.o
ranlib liball.a
