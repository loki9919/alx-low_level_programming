#include "main.h"

/**
 * print_line - draws a strait line
 * @n: number of character '_'
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		n++;
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
