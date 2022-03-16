#include <stdlib.h>
#include <stdio.h>



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
putchar('+');

}
else if (n == 0)
{
putchar('0');
r = 0;
}
else
{
putchar('-');
r = -1;
}

return r;


}
