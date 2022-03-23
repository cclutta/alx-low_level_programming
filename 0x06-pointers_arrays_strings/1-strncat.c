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
	j = 0;
	

	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[j] != '\0')
	{
		j++;
	}
	
	if (*src != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
