#!/bin/bash
gcc -g -Wall -Werror -Wextra -pedantic -fPIC -shared *.c -o liball.so
