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
	
	for(i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

}
