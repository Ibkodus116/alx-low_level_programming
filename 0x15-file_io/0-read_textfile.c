#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: the name of the file to read.
 * @letters: the number of letters it should read and print
 *
 * Return: number of printed words.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int nb_read, nb_write;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	nb_read = read(fd, buff, letters);

	if (nb_read == -1)
		return (0);

	nb_write = write(STDOUT_FILENO, buff, nb_read);

	close(fd);
	free(buff);

	return (nb_write);

}
