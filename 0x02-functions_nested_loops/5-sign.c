#include "main.h"

/**
 * print_sign - checks if digit negative ,positiv or is 0
*/
int print_sign(int n)

{
	if (n >= 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
	}
	_putchar('\n');
}
