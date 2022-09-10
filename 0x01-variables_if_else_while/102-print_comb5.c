#include <stdio.h>
/*
 *
 *
 *
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
				putchar(a);
				putchar(a);
				putchar(' ');
				if (a != b)
				{
					putchar(a);
					putchar(b);
					putchar(',');
				}
		}
	}
	putchar('\n');
	return (0);
}
