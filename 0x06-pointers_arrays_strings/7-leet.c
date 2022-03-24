/**
 * leet - that encodes a string into 1337.
 * @str: pointer
 *
 * Return: char
 */
char *leet(char *str)
{
	int i;
	int j;
	char lt[] = "ol_ea__t";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lt[j] != '\0'; j++)
		{
			if (str[i] == lt[j] || str[i] == (lt[j] - 32))
			{
				str[i] = j + '0';
			}
		}
	}
	return (str);
}
