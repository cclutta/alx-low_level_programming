/**
 * string_toupper -  that changes all lowercase to uppercase.
 * @str: param pointer to a char
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int i; 

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

	}
	return (str);

}
