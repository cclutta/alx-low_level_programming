#include <stdlib.h>
#include <stdio.h>


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
