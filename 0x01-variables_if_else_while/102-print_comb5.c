#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)

{
	int i;
	int j;

	for (i = 0; i < 100 ; k++)
	{
		for (j = i + 1 ; j < 100; j++)
		{
			putchar (i / 10 + '0');
			putchar (i % 10 + '0');

			putchar (' ');

			putchar (j / 10 + '0');
			putchar (j % 10 + '0');

			if (i == 98 && j == 99)
			{
				break;
			}

			putchar(',');
			putchar (' ');

		}
	}
	putchar('\n');

	return (0);
}
