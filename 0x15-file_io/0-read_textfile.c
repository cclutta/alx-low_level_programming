#include "main.h"

/**
* read_textfile - reads a text file and prints to stdout
* @filename: file
* @letters: to print
*
* Return: ssize_t
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int f;
	int i, res;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	i = read(f, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}

	buffer[i] = '\0';
	close(f);
	res = write(STDOUT_FILENO, buffer, i);
	if (res < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (res);

}
