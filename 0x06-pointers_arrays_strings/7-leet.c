#include "main.h"
#include <string.h>
/**
 * *leet - Description
 * @c: inputted string
 *
 * Return: 0
 */
char *leet(char *c)
{
	int i, j;
	char A[] = { 'A', 'E', 'O', 'T', 'L' };
	char N[] = { '4', '3', '0', '7', '1' };
	char a[] = { 'a', 'e', 'o', 't', 'l' };

	while (c[i] != '\0')
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (c[i] == A[j] || c[i] == a[j])
				c[i] = N[j];
		}

		i++;
	}

	return (c);
}
