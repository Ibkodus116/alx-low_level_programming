#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: Success (1) else (-1)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ct_write, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);


	if(text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
	;

	ct_write = write(fd, text_content, i);

	if (ct_write == -1)
		return (-1);

	return (1);
}
