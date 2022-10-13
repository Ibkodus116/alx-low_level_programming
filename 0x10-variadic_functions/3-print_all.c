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
	int str_len = strlen(format);
	va_list str;
	va_start(str, format);

	char *s;
	int i = 0;

	while (i < str_len)
	{
		int x = 1;
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

int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
