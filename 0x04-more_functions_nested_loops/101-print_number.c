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

	if (_n / 10)
		print_number(_n / 10);

	_putchar(_n % 10 + '0');

}
