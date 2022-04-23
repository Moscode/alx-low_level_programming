#include "lists.h"

void before_main(void) __attribute__((constructor));
void after_main(void) __attribute__((destructor));

/**
 * before_main - executes before main
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

