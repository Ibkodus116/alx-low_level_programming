#include "main.h"
/**
 * print_alphabet - prints the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: Always 0 on success
 */

void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar('\n');
	return;
}
