#include "main.h"

/**
 * more_numbers - print numbers
 *
 * rints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: Always (0)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			print_num(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

/**
 * print_num - print numbers
 *@n: number
 *
 * prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: Always (0)
 */

void print_num(int n)
{
	if (n / 10)
		print_num(n / 10);

	putchar(n % 10 + '0');
}
