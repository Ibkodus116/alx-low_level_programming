#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
