#include "main.h"
#include <string.h>
/**
<<<<<<< HEAD
 * main - description
=======
 * _strcat - description
 * @src: A pointer to a character that will be changed
 * @dest: A pointer to a character that will also be changed
 *
>>>>>>> 28452a65173499cfb83604cd25da3b0d013ceeb5
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
        int i, j;

<<<<<<< HEAD
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
=======
        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }

        j = 0;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                j++;
                i++;
        }

        dest[i] = '\0';

        return (dest);
>>>>>>> 28452a65173499cfb83604cd25da3b0d013ceeb5
}
