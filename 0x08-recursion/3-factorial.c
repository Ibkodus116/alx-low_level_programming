/**
 * factorial - returns the factorial of a given number.
 *
 * @n: the given number
 *
 * Return: the factorial
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	} else if (n == 1 || n == 0)
	{
		return (1);
	}
		i =  n * factorial(n - 1);
		return (i);
}
