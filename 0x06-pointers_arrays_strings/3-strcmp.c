/**
 * *_strcmp -  that copies a string.
 * @s1: param pointer to a char
 * @s2: param pointer to a char
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n;
	int i;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	n = s1[i] - s2[i];
	return (n);
}
