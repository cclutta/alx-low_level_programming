/**
 * *_strncat -  that concatenates two strings.
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: number
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;


	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';
	return (dest);
}
