#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments
 * passed to the function
*/
void print_all(const char * const format, ...)
{
	char *s;
	int str_len = strlen(format);
	va_list str;
	int i, x = 0;

	va_start(str, format);

	while (i < str_len)
	{
		x = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(str, int));
			break;
		case 'i':
			printf("%d", va_arg(str, int));
			break;
		case 'f':
			printf("%f", va_arg(str, double));
			break;
		case 's':
			s = va_arg(str, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			x = 0;
			break;
		}
		if (x == 1 && i < str_len - 1)
		{
			printf(", ");
		}

		i++;
	}
	va_end(str);
	printf("\n");
}
