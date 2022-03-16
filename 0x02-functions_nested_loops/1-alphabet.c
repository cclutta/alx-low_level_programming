#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * main - its main
 *
 * Return: 0
 */
void print_alphabet(void)
{

char i;

for (i = 'A'; i <= 'Z'; i++)
{
putchar(tolower(i));
}
putchar('\n');

}
