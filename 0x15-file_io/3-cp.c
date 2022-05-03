#include "holberton.h"

/**
 * main - for crying out loud
 * @argc: number of args
 * @argv: array of args
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int f_r, f_w, x, m, n;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_r = open(argv[1], O_RDONLY);
	if (f_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(f_r, buffer, BUFSIZ)) > 0)
	{
		if (f_w < 0 || write(f_w, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(f_r);
	n = close(f_w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
