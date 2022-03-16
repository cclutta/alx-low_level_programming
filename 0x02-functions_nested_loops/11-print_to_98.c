#include <stdlib.h>
#include <stdio.h>
#include "main.h"



/**
 * print_to_98- its main
 * @n: bitch
 *
 * Return: 0
 */
int print_to_98(int n)
{
int x;
if (n >= 98)
{
for (x = n; x >= 98; x--)
{
putchar(',');
putchar(' ');
}}
else
{
for (x = n; x <= 98; x++)
{
putchar(n + '0');
putchar(',');
putchar(' ');
}

}


return (0);
}

void print_num(int n)
{
if (n < 0) {
putchar('-');
n = -n;
}
if ( n / 10 )
print_num( n / 10);
 
putchar( n%10 + '0');
}







