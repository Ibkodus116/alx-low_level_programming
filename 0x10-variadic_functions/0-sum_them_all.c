#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: total args
 *
 * Return: Sum on success else 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;
	va_list args;

	va_start(args, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			sum += x;
		}
		va_end(args);
		return (sum);

	}
	else
	{
		return (0);
	}

}
