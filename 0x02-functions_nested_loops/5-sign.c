#include <stdlib.h>
#include <stdio.h>
#include "main.h"



/**
 * print_sign- its main
 * @n: bitch
 *
 * Return: 0
 */
int print_sign(int n)
{
int r;

if (n > 0)
{

r = 1;
_putchar('+');

}
else if (n == 0)
{
_putchar('0');
r = 0;
}
else
{
_putchar('-');
r = -1;
}

return (r);


}
