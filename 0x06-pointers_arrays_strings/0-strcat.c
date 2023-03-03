#include "main.h"
#include <string.h>

/**
 * *_strcat - This function concatenates two strings
 * @src: inputted string
 * @dest: inputted string
 *
 * Return: it returns a concattenated string
 */
char *_strcat(char *dest, char *src)
<<<<<<< HEAD
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

=======
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
>>>>>>> f05c8d0417976c02679a2a0517b9eb86616bb7b7
		if ((*(src + j)) == '\0')
		{
			(*(dest + i)) = (*(src + j));
			break;
		}
<<<<<<< HEAD
	}
	return (dest);

}
=======
		}
		return (dest);
		}
>>>>>>> f05c8d0417976c02679a2a0517b9eb86616bb7b7
