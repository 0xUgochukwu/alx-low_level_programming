#!/bin/bash
find . -type f -name '*.c' -exec gcc -c {} \;
ar -rc libmy.a *.o
