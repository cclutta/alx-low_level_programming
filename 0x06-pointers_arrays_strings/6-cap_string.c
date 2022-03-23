
/**
 * cap_string - that capitalizes all words of a string.
 * @str: pointer to char params
 *
 * Return: char pointer
 */

char *cap_string(char *str)
{
	int i; 
	int j;
	char delim[] = " \t\n,;.!?\"(){}";
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
				for (j = 0; delim[j] != '\0'; j++)
					if (str[i] == delim[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] = str[i + 1] - 32;
	}
	return (str);

}
