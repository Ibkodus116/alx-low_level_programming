#include <stdio.h>
/**
 * main - using loop to print from a-z
 *
 * Return: 0 is always returned
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
