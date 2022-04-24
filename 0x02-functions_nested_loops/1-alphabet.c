#include "main.h"

/**
 * print_alphabet - To print all alphabets in lowercase
 * alpha - Each character
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
