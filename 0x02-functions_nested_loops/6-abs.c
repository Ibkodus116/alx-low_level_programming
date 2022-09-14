#include "main.h"

/**
 * _abs - get the absolute
 * value of number
 *
 * @x: number passed
 *
 * Return: the absolute number of the
 * number passed in.
 */

int _abs(int x)
{
	int a;

	if (x < 0)
	{
		a = x * -1;
		return (a);
	}
	else
	{
		a = x * 1;
		return (a);
	}
}
