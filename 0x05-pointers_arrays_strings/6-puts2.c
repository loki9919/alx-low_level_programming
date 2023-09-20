#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input string
 */
void puts2(char *str)
{
	int lenght = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		lenght++;
	}
	t = lenght - 1;
	for (a = 0 ; a <= t ; a++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}

