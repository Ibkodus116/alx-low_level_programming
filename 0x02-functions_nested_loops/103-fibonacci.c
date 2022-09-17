#include <stdio.h>
/**
 * main - program that finds and prints the sum of
 * the even-valued terms of fibonacci
 *
 * Return: Always (0)
 */
int main(void)
{
	int n1, i, n2, n3, sum;

	n1 = 0;
	n2 = 1;


	for (i = 2; i <= 33; ++i)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
		printf("%d", sum);
		printf("\n");
	return (0);
}
