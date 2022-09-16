#include "main.h"
/**
 * _isupper - Check if uppercase was passed
 *
 * @c: the value to check
 *
 * Return: 1 if uppercase and 0 if other wise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
