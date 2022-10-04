#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: str the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str1;
	unsigned int i, j, k, x;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str1 = (char *) malloc(sizeof(char) * (i + 1));

	if (str1 == NULL)
	{
		free(str1);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		str1[k] = s1[k];
	}

	for (x = 0; x <= j; k++, x++)
	{
		str1[k] = s2[x];
	}


	return (str1);
}
