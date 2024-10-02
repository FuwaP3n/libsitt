#ifndef LIBSITT_H
#define LIBSITT_H
#include <stdio.h>
int line_size(FILE *file);
char * readline(FILE *file, int *size);
void print_str(char * str, int size);
void print_strln(char * str, int size);
void cp_line(char * input, char * output, int size);
#endif
