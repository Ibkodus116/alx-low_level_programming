#include <stdio.h>
/**
 * main - Print capital A-Z and small a-z on a line
 * and break next line
 *
 * Return: always return 0
 */
int main(void)
{
	char alpha, cap;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
