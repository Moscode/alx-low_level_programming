#include "main.h"

/**
 * _islower - Test if a character is lowercase or otherwise
 * @c: character to test
 *
 * Return: Always 1 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	return (0);
}
