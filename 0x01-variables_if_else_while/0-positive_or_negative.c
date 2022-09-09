#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check if n is negative, positive or 0
 *
 *
 * Return: Return 0 regardless of the result
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
