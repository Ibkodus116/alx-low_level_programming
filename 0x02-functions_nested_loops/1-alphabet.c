#include "main.c"
/**
 * main - prints the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar('\n');
	return (0);
}
