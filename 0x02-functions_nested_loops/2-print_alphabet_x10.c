#include "main.h"

/**
 * print_alphabet_x10 - Print all alphabets in lowercase 10 times
 *
 * c - Each character
 */
void print_alphabet_x10(void)
{
	char c;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
