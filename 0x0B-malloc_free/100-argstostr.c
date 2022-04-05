#include "main.h

/**
* _strlen - size of string
* @s: char pointer
*
* Return: int
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
* argtostr - that concatenates all the arguments of your program.
* @ac: number
* @av: args
*
* Return: char pointer
*/

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len, L = 0;
	char *p;

	if (!ac || !av)
	{
		return (NULL);
	}
	L = 0;

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
		L += len;
	}
	p = malloc(sizeof(char) * L + 1);

	if (!p)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);

		for (j = 0; j < len; j++, k++)
		{
			p[k] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
