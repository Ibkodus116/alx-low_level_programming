#include "main.h"
/**
 * main - prints the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: 0 on success
 */

int print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar('\n');
	return (0);
}
