#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char newString[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(newString[i]);
	}
	_putchar('\n');
	return (0);
}
