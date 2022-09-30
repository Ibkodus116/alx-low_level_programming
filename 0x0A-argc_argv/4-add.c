#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if Success else 1;
 */


int main(int argc, char *argv[])
{
	int i, ans = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		ans = ans + atoi(argv[i]);
	}
	printf("%d\n", ans);
	return (0);
}
