#include "function_pointers.h"

/**
* print_name - that prints a name
* @name: char pointer
* @f: function
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
