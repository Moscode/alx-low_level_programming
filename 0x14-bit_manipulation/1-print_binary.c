#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int temp;

	temp = n;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(temp >> 1);
		temp = temp & 1;
		_putchar(temp + '0');
	}
}
