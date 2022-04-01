#include "main.h"

/**
* main - check
* @argc: count
* @argv: char pointer
*
* Return: int
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	
	
	
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += argv[i];
	}
	printf("%d\n", sum);
	return (0);
  
  }
