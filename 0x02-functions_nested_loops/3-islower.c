#include "main.h"

/**
 * int _islower(int c) - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is lower case,0 otherwise
*/
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
}
