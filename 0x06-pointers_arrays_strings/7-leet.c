#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int j = 0, i;
	int set1[] = {97, 101, 111, 116, 108};
	int set2[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + j) == set1[i] || *(s + j) == set2[i])
			{
				*(s + j) = num[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
