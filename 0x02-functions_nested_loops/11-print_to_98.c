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
if (n > 98)
{
for (x = n; x >= 98; x--)
{
putchar(n + '0');
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
