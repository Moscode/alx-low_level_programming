#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char:%d byte(s)\n
		Size of an int:%d byte(s)\n
		Size of a long int:%d byte(s)\n
		Size of a long long int:%d byte(s)\n
		Size of a float:%d byte(s)",
		sizeof(char),
		sizeof(int),
		sizeof(long int),
		sizeof(long long int),
		sizeof(float));
	return (0);
}
