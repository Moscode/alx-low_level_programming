#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: value of the bit to check in decimal
 * @index: value of the index to get
 * Return: value at the index if exist else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		n = n >> index;
		n = n & 1;
		return (n);
	}
}
