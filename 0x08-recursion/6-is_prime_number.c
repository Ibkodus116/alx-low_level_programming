#include "main.h"

/**
 * multiply - finds the muliple of num
 * @num: the initial number
 * @x: increaser
 * Return: 0 or 1
 */

int multiply(int num, int x)
{
	if ((num % x) == 0)
	{
		if (x == num)
			return (1);
		return (0);
	}

	return (0 + multiply(num, x + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: the number to return
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if ((n % 2) == 0)
		return (0);

	return (multiply(n, 3));
}
