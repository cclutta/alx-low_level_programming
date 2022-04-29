#include "main.h"

/**
* binary_to_uint - converts binary to int
* @b: char of 0s and 1s
*
* Return: uint
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res = 2 * res + (b[i] - '0');
		i++;
	}
	return (res);

}
