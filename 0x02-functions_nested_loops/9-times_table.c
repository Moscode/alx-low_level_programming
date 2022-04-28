#include "main.h"

/**
 * times_table - Print 9 times table starting from 0
 *
 * i and j represent the numbers to be used.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int res = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((res < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
