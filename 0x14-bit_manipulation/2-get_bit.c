#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @index: starting from 0 of the bit
 * @n: the number
 *
 * Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (n == 0 && index < 64)
		return (0);
	if (bit == 0 || bit == 1)
	{
		return (bit);
	}

	return (-1);


}
