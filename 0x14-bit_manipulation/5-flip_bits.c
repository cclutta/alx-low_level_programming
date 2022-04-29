#include "main.h"

/**
* flip_bits - to flip bits
* @n: num1
* @m: num2
*
* Return: unsigned int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int flips = 0;


	while (res)
	{
		if (1 & res)
		{
			flips++;
		}
		res = res >> 1;
	}
	return (flips);
}
