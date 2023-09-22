#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (n / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
