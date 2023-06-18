#!/bin/bash
echo '#include <stdio.h>' > program.c && echo 'int main() { puts("Programming is like building a multilingual puzzle"); return 0; }' >> program.c && gcc program.c -o program && ./program; rm program.c program
