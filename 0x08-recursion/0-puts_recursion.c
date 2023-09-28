#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: input
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
