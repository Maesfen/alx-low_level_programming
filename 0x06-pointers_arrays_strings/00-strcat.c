nclude "main.h"
#include <string.h>
/**
 * main - description
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; i < 1000 ; i++)
	{
		if ((*(dest + i)) == '\0')
			break;
	}

	j = 0;

	while ((*(src + j)) != '\0')
	{
		(*(dest + i)) = (*(src + j));
		j++;
		i++;

		if ((*(src + j)) == '\0')
		{
			(*(dest + i)) = (*(src + j));
			break;
		}
	}

	return (dest);
}
