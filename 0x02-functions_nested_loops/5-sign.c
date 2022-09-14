#include "main.h"

/**
 *  _isalpha - Chekc if character passed is alphabet or not
 * @c: The character to check
 *
 * Return: if Alphabet 1.
 * if others , 0 is returned.
 */

int print_sign(int n)
{
	if (n > 0)
	{
        _putchar(43);
		return (1);
	}
	else if (n == 0)
	{
        _putchar(48);
		return (0);
		}
	else
	{
        _putchar(45);
		return (-1);
	}
}
