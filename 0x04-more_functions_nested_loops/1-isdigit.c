#include "main.h"

/**
 * _isdigit - Check if digit was passed
 *
 * @c: the value to check
 *
 * Return: 1 if digit and 0 if other wise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
