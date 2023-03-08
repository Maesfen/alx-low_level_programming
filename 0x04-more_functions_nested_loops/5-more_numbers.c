#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('1');
			}
		j++;
		}
			_putchar (j % 10 + '0');
			i++;
	}
	_putchar ('\n');
}
