#ifndef FILE_FUNCTION_POINTERS
#define FILE_FUNCTION_POINTERS

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif
