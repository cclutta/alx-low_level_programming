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
int x;
for (x = 'A'; x <= 'Z'; x++)
{
if (x != 'Q' || x != 'E')
{
putchar(tolower(x));
}
}
putchar('\n');
return (0);
}
