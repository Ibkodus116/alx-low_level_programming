#include "main.h"
/**
 * jack_bauer - print bauer 24hour time
 *
 */
void jack_bauer(void)
{
	int j, k, x, n;

	for (x = '0'; x <= '2'; x++)
	{
		for (n = '0'; n <= '3'; n++)
		{
			for (j = '0'; j <= '5'; j++)
			{
				for (k = '0'; k <= '9'; k++)
				{

					_putchar(x);
					_putchar(n);
					_putchar(':');
					_putchar(j);
					_putchar(k);
					_putchar('\n');

				}
			}
		}
	}

}
