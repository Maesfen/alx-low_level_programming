#include "main.h"
/**
 * jack_bauer - prints every minute of the da
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
    int i, j, k, l, max;
    
    max = 57;

    for (i = 48; i <= 50; i++)
    {
        if (i == 50)
        {
            max = 51;
        }

        for (j = 48; j <= max; j++)
        {
            for (k = 48; k <= 53; k++)
            {
                for (l = 48; l <= 57; l++)
                {
                    _putchar(i);
                    _putchar(j);
                    _putchar(':');
                    _putchar(k);
                    _putchar(l);
                    _putchar('\n');
                }

            }
        }
    }

}
