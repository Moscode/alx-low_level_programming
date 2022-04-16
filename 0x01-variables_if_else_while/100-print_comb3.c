#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((n != j) & (n < j))
			{
				putchar(n + '0');
				putchar(j + '0');
				if ((n != 8) || (j != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
