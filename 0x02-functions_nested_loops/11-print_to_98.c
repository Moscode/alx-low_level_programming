#include "main.h"

/**
 * print_to_98 - print natural number from n to 98
 *
 * @n: starting number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
