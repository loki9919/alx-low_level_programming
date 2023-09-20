#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input string
 */
void puts_half(char *str);
{
	int lenght, a ,n;

	lenght = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		lenght++;
	}
	n = (lenght / 2);

	if ((lenght % 2) == 1)
	{
		n = ((lenght - 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
