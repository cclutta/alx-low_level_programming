#ifndef FILE_CALC
#define FILE_CALC

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct op - Structure op
 * @op: operator
 * @f: function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_p;

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
