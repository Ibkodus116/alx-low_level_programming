#include "main.h"
/**
 * create_file - creates a file.
 *
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: Success (1) else (0)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);


    if (text_content != NULL)
    {
	    write(fd, "", 1);
    }
	for (i = 0; text_content[i] != '\0'; i++)
		;



	write(fd, text_content, i);

	close(fd);
	return (1);
}
