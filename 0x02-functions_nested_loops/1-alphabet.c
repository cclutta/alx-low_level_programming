#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * main - its main
 *
 * Return: 0
 */
int main(void)
{

char i;

for (i = 'A'; i <= 'Z'; i++)
{
putchar(tolower(i));
}
putchar('\n');
return (0);
}
