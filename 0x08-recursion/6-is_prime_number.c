#include "main.h"

/**
* is_prime_number - hat returns 1 if the input integer is a prime.
* @n: number
*
* Return: int
*/

int is_prime_number(int n)
{
	int i = divide(n);
	
	if (i == 1)
	{
		return (1);
	}
	else if ( n % i == 0)
	{
		return (0);
	}
	
	else 
	{
		i = i - 1;
		is_prime_number(n);
		
}
