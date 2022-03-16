#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * print_alphabet_x10 - its main
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{

char i;
int x;
for (x = 0; x < 10; x++)
{

for (i = 'A'; i <= 'Z'; i++)
{
putchar(tolower(i));
}
}
putchar('\n');

}
