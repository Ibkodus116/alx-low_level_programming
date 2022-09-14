#include "main.h"
/**
 * print_last_digit - Print the last number
 * of a given number
 *
 * @x: the number we want to check it last value
 *
 * Return: the last number
 */
int print_last_digit(int x)
{
	int f = x % 10;

	if (f < 0)
	{
		_putchar(-f + '0');
		return (-f);

	}
	else
	{
		_putchar(f + '0');
		return (f);
	}
}
