#include "main.h"

/**
 * _isalpha - Check if a character is alphabet or otherwise
 *
 * @c: Character to be checked
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)

		return (1);

	return (0);
}
