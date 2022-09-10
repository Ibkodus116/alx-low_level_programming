#include <stdio.h>
/**
 * main - Print small a-z on a line ommi 'q' and 'e'
 * then break next line
 *
 * Return: always return 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
