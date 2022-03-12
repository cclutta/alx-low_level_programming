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
char c;
for (x = 'A'; x <= 'Z'; x++)
{
c = tolower(x);
if (c != 'q' || c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
