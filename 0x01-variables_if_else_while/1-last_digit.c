#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checking the last number of a randomly generated
 * number if it's greater than 5 less than 6 or equal 0
 *
 * Return: code Retuns 0 always
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	} else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
