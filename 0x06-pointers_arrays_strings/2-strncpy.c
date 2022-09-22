#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination to copt into
 * @src: string to copy
 * @n: number of byte
 * Return: dest which is the new copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
