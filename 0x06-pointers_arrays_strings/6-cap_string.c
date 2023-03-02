#include "main.h"
#include <string.h>
/**
 * *cap_string - Description
 *  @c: inputted string
 *
 * Return: returns a converted string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0;  c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123 && (c[i - 1] == ' '
				       	|| c[i - 1] == '\n' || c[i - 1] == '\t' || c[i - 1] == ','
					|| c[i - 1] == ';' || c[i - 1] == '.' 
					|| c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '('
					|| c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}' || i == 0))
			c[i] = c[i] - 32;
	}

	return (c);
}
