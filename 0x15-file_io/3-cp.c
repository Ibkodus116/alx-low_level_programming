#include "main.h"
/**
 * errors - Error handle.
 * @file_from: Original file.
 * @file_to: Destination.
 * @av: Argument value
 */

void errors(int file_from, int file_to, char **av)
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
}

/**
 * main - ccopies the content of a file to another file.
 * @ac: number of arguments.
 * @av: arguments vector.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int file_from, file_to, rd_ff, wr_ft, cl_ft, cl_ff;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors(file_from, file_to, av);

	rd_ff = 1024;
	while (rd_ff == 1024)
	{
		rd_ff = read(file_from, buf, 1024);
		if (rd_ff == -1)
			errors(-1, 0, av);

		wr_ft = write(file_to, buf, rd_ff);
		if (wr_ft == -1)
			errors(0, -1, av);
	}

	cl_ff = close(file_from);
	if (cl_ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_from);
		exit(100);
	}
	cl_ft = close(file_to);
	if (cl_ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_from);
		exit(100);
	}
	free(buf);
	return (0);
}
