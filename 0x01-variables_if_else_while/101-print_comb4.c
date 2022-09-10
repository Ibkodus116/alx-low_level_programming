#include <stdio.h>
/**
 * main - program that prints all possible different
 * combinations of three digits.
 *
 * Return: Always return 0
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (a != b && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
