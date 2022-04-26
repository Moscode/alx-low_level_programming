#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @n: Number to process
 * Return: Always last digit (Success)
 */
int print_last_digit(int n)
{
	int ans;

	if (n >= 0)
	{
		int res = n % 10;

		_putchar(res);
		return (res);
	}
	else
	{
	ans = n % 10;
	ans *= -1;
	_putchar(ans + '0');
	return (ans);
	}
}
