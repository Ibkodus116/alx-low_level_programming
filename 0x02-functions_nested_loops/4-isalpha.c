#include "main.h"

/**
 *  _isalpha - Chekc if character passed is alphabet or not
 * @c: The character to check
 *
 * Return: if Alphabet 1.
 * if others , 0 is returned.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
		}
	else
	{
		return (0);
	}
}
