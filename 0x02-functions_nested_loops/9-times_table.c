#include <stdlib.h>
#include <stdio.h>




/**
 * times_table - its main
 * @n: bitch
 *
 * Return: 0
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
print_num(i * j);
if (j != 9){
putchar(',');
putchar(' ');
}
}
putchar('\n');
}


}
/**
 * print_num - its main
 * @n: bitch
 *
 * Return: 0
 */
void print_num(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
print_num(n / 10);
putchar(n % 10 + '0');
}
