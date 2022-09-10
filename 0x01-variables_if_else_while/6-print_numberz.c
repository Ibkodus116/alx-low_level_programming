#include <stdio.h>
/**
 * main - Print from number 0-9 using the char function
 *
 * Return: return 0 at the end
 */
int main(void)
{
	char i = '1';

	for (i = '1'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
