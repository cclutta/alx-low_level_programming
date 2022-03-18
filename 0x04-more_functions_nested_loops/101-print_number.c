#include "main.h"

/**
 * print_number -  print number
 *@n: the number
 *
 * Return: Void
 */

void print_number(int n)
{
	int _n;

	if (n < 0)
	{
		_n = -n;
		_putchar('-');
	}
	else
	{
		_n = n;
	}

	print_u_number((unsigned int) _n);

}

/**
 * print_u_number -  print number
 *@n: the number
 *
 * Return: Void
 */
void print_u_number(unsigned int n)
{
	if (n / 10)
		print_u_number(n / 10);

	_putchar(n % 10 + '0');
}
