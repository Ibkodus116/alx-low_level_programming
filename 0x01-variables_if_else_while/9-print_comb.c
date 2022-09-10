#include <stdio.h>
/**
 * main - printing all possible combinations of
 * single-digit numbers
 *
 * Return: return 0 at the end of the program
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
