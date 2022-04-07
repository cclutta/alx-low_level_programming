#include "main.h"

/**
* main - check the code
* @argc: number
* @argv: array
* 
* Return: int
*/

int main(int argc, char *argv[])
{
	unsigned int mul;
	int i, j;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}
	
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{  
				printf("Error\n");
				exit(98); 
			}
		}
		
	}
	
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	
	return (0);
}
