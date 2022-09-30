#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if Success else 1;
 */
int main(int argc, char *argv[])

{
	int i, j, ans;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		ans = i * j;
		printf("%d\n", ans);
	} else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
