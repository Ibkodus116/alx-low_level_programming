#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: is the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);

		if (!x)
			x = "(nil)";

		printf("%s", x);

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
