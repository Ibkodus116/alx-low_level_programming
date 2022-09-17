#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: Always (0)
 */
int main(void)
{
	long int i, prime;

	prime = 612852475143;

	for (i = 2; i < prime; i++)
	{
		if (prime % i == 0)
		{
			prime = prime / i;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
