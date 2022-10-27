#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: Final number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sNum, fNum = 0, len;
	unsigned int pow = 1;

	if (!b)
		return (0);


	for (len = 0; b[len] != '\0' ; pow *= 2, len++)
		;
	pow /= 2;

	while (*b != '\0')
	{

		if (*b == '0' || *b == '1')
		{
			sNum = *b - '0';
			fNum = fNum + (pow * sNum);
			pow /= 2;
		} else
		{
			return (0);
		}
		b++;
	}

	return (fNum);
}
