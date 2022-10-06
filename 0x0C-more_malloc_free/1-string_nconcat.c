#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size of s2
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int s1len, s2len, tlen, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;

	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;

	if (n > s2len)
		n = s2len;

	tlen = s1len + n;

	sout = malloc(tlen + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < tlen; i++)
		if (i < s1len)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - s1len];

	sout[i] = '\0';

	return (sout);
}
