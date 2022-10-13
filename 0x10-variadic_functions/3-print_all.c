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
	char arr[] = "cifs";
	int str_len = strlen(format);
	va_list str;
	int x, j, i = 0;

	va_start(str, format);

	while (i < str_len)
	{

		j = 0;
		while (arr[j])
		{
			if (x && arr[j] == format[i])
			{
				printf(", ");
			}j++;
		}
		switch (format[i])
		{
		case 'c':
			x = 1;
			printf("%c", va_arg(str, int));
			break;
		case 'i':
			x = 1;
			printf("%d", va_arg(str, int));
			break;
		case 'f':
			x = 1;
			printf("%f", va_arg(str, double));
			break;
		case 's':
			x = 1;
			s = va_arg(str, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		}
		i++;
	}
	va_end(str);
	printf("\n");
}
