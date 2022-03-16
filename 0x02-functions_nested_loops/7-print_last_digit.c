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
if (n < 0)
  n = n * -1;
int r;
r = n % 10;
_putchar(r + '0');
return (r);

}
