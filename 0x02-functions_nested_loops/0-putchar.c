#include <stdlib.h>
#include <stdio.h>


/**
 * main - its main
 *
 * Return: 0
 */
int main(void)
{
  char _putchar [] = {"_putchar\n"};
int i;

for(i = 0; i < sizeof(_putchar); i++)
{
    putchar(_putchar[i]);
}

return (0);
}
  
