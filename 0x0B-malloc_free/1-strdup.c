#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory
 *
 * @str: The given string
 *
 * Return: chr on success
 */

char *_strdup(char *str)
{
	char *chr;
	unsigned int i, j, num = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		num = num + i;
	}

	chr = (char *)malloc(sizeof(char) * (num + 1));

	if (chr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		chr[j] = str[j];

	return (chr);
}
