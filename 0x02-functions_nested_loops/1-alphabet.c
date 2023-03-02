#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Description: a function that prints the alphabet,
 *in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet  <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
