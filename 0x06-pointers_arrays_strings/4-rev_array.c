#include "main.h"
#include <string.h>
/**
 * reverse_array - Description
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		n--;
	}
}
