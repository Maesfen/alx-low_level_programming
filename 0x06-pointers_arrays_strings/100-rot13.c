#include "main.h"
#include <string.h>
/**
 * *rot13 - Description
 * @c: inputted string
 *
 * Return: returns a converted string
 */
char *rot13(char *c)
{
	int i = 0, j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[i] != '\0')
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (c[i] == input[j])
			{
				c[i] = output[j];
				break;
			}
		}

		i++;
	}

	return (c);
}
