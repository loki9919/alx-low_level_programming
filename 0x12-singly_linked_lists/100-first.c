#include <stdio.h>

/**
 * print_message - print before main function
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
