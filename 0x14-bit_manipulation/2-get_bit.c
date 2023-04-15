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
	if ((n & (1 << index)) > 0)
		return (1);
	else if((n & (1 << index)) == 0)
		return (0);

	return (-1);
}
