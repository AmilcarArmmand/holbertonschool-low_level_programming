#!/bin/bash
gcc -shared -fPIC unrandom.c -o unrandom.so
export LD_PRELOAD=$PWD/linux-vdso.so.1
