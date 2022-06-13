#include "main.h"

/**
 * _strstr - that searches a string for any of a set of bytes.
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Return: char pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *hs = haystack;
	char *nd = needle;

	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (hs);
		}
		needle = nd;
		hs++;
		haystack = hs;
	}
	return (0);
}
