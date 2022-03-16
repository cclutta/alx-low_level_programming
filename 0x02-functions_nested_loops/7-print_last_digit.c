#include <stdlib.h>
#include <stdio.h>
#include "main.h"



/**
 * print_last_digit- its main
 * @n: bitch
 *
 * Return: 0
 */
int print_last_digit(int n)
{
int r;
r = (abs(n)) % 10;
_putchar(r + '0');
return (r);

}
