#include "main.h"
/**
 * more_numbers - Print 1 to 14 using putchar
 *
 */
void more_numbers(void)
{
	int i, x;

	for (x = 1; x <= 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}

}
