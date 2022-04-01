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

	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
