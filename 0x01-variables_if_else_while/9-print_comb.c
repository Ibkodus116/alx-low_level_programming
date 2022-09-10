#include <stdio.h>
/**
 * main - printing all possible combinations of
 * single-digit numbers
 *
 * Return: return 0 at the end of the program
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
