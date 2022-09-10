#include <stdio.h>
/**
 * main - printing from a-z in reverse i.e z-e
 *
 * Return: return 0 at end of the program
 */
int main(void)
{
	char alp = 'z';

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
