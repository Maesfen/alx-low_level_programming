#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0, j = 1, k = 0;
	int sum = 0;

	while (k < 4000000)
	{
		next = i + j;
		i = j;
		j = k;
		if (k % 2 == 0)
			sum += k;

	}
	printf("%i\n", sum);
	return (0);
}
