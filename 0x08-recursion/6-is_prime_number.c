#include "main.h"

/**
* divide - divide
* @n: number
* @i: number
*
* Return: int
*/

int divide(int n, int i)
{
	if (i % n == 0)
	{
		return (0);
	}
	else if (i / 2 > n)
	{
		return (divide(n + 2, i));
	}
	else 
		return (1);
}
	

/**
* is_prime_number - hat returns 1 if the input integer is a prime.
* @n: number
*
* Return: int
*/

int is_prime_number(int n)
{
	
	if( n < 2 || (n != 2 && (!(n % 2)))
	   {
		   return (0);
	   }
	   else 
	   return (divide(3, n);
		
}
