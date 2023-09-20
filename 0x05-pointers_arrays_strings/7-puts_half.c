#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}
	start = (length + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
