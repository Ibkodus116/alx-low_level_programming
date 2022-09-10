#include <stdio.h>
/**
 * main - a program that prints all possible
 * different combinations of two digits.
 *
 * Return: Always Return 0
 */

int main(void)
{
	int num, n;

	for (num = 48; num <= 57; num++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (num != n && num < n)
			{
				putchar(num);
				putchar(n);
				if (num == 56 && n == 57)
				{
					break;
				}
					putchar(',');
					putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
