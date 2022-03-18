#include "main.h"

/**
 * print_line - print line
 * @n: size
 *
 * Description: tion that draws a straight line in the terminal.
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
