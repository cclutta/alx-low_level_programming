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
r = n % 10;
print_num(r);
return (r);

}
void print_num(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10 )
print_num(n / 10);
putchar(n % 10 + '0');
}
