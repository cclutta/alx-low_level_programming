#include "main.h"

/**
* set_bit - set bit at given index
* @n: number
* @index: index
*
* Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
