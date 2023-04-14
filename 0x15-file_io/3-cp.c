#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int f_rd, f_wr, x, y, z;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_rd = open(argv[1], O_RDONLY);
	if (f_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(f_rd, buf, BUFSIZ)) > 0)
	{
		if (f_wr < 0 || write(f_wr, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_rd);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(f_rd);
	z = close(f_wr);
	if (y < 0 || z < 0)
	{
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_rd);
		if (z < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_wr);
		exit(100);
	}
	return (0);
}
