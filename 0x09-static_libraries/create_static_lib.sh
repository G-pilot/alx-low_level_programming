#!/bin/bash
gcc -wall -pedanti -Werror -Wextra -c *.c
ar -rc liball.a*o
ranlib.liball.a
