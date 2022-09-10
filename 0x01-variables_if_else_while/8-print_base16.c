#include <stdio.h>
/**
 * main - Print out all number of base16
 *
 * Return: at the end we return 0
 */
int main(void)
{
	char num, alp;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	} for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
