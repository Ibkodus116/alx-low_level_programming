/*
 * _putchar - 
 *
 *
 */

#include "main.h"

int main(void)
{
	int word[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	int sz = sizeof(word) / sizeof(word[0]);
	for (i = 0; i < sz; i++){		
		_putchar(word[i]);
	}

	_putchar('\n');
	return (0);
}
