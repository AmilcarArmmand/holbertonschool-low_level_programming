#!/bin/bash
LD_PRELOAD=$PWD/linux-vdso.so.1
ldconfig gm
