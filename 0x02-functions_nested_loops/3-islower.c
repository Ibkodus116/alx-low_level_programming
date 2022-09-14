#include "main.h"

/**
 *  _islower - Chekc if a letter is Capital or lower
 * @c: The character to check
 *
 * Return: if Lower Case 1.
 * if upper , 0 is returned.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
