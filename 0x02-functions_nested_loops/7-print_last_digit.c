#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: random intiger
 * Description: Write a function that prints the last digit of a number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last;
	last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	putchar(last + '0');
	return (last);
}
