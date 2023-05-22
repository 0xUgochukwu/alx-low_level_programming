#!/bin/bash
gcc *.c -o -fPIC
gcc *.o -shared -o liball.so
