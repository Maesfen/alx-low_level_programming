/*
 * Maes: I am feeling proud today.
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a char string form main function.
 *
 * Return: Return: the converted number, or 0 if
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int sum = 0;
	int base;

	i = 0;

	while (b[i])
	{
		if ((b[i] != '0' && b[i] != '1'))
			return (0);
		i++;
	}
	i--;

	for (j = i; j >= 0; j--)
	{
		if (i == j)
			base = 1;
		else
			base *= 2;
		if (b[j] & 1)
			sum += base;
	}
	return (sum);


}
