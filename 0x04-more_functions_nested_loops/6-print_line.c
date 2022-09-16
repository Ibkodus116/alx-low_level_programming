#include "main.h"

/**
 * print_line - function that print a straight line
 * @n: accept a number to
 * determine the lenght of the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
