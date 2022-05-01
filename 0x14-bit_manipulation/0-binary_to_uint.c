#include "main.h"

/**
 * raiseToPower - Compute value to the power of pow
 *@value: main value
 *@pow: exponent
 *
 *Return: total computation value Always > 0 (Success)
 */

int raiseToPower(int value, int pow)
{
	if (pow < 0)
		return (-1);
	else if (pow == 0)
		return (1);
	else
		return (value * raiseToPower(value, pow - 1));
}

/**
 * binary_to_unit - convert from base 2 to base 10
 *
 *@b: pointer to a string of 0(s) and 1(s) chars
 *
 * Return: converted number in base 10 or 0 if b is Null or b > 1
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length, power;

	if (b == NULL)
		return (0);
	length = 0;
	while (b[length] != '\0')
		length++;

	result = 0;
	power = 0;
	while (length-- && length >= 0)
	{
		if (b[length] == '1')
			result += raiseToPower(2, power);
		else if (b[length] != '0')
			return (0);
		power++;
	}
	return (result);
}
