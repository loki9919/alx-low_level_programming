#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i] % 2);
	}
	_putchar('\n');
}
