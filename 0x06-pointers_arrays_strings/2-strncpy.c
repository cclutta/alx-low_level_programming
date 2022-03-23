/**
 * *_strncpy -  that copies a string.
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: number
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
 
	return (dest);
}
