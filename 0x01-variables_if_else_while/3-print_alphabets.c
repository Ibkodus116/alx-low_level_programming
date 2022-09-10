#include <stdio.h>

int main(void)
{
	char alpha, cap;
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for(cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	
	putchar('\n');
	return (0);
}
