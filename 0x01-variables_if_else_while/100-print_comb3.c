#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    char i, j;

    for (i = 48; i <= 57; i++)
    {
        for (j = 48; j <= 57; j++)
        {
            if(i != j)
                {
                    if(i < j)
                        {
                            putchar(i);
                            putchar(j);

                            if ((i == 56) && (j == 57))
                                {
                                    break;
                                }


                            putchar(',');
                            putchar(' ');
                        }
                }
        }

    }
            putchar('\n');

    return 0;
}
