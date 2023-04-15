#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: an intiger to check its bit at a given index.
 * @index: an index value for a given bit.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	
	if (n == 0 && index)
		return (0);

	for (i = 0; i <= index; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}

	return (-1);
}
