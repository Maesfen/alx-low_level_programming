#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char alpha[] = "0123456789abcdef\n";
	int i;

	for (i = 0; i < 17; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
