#include "main"

/**
 * print_to_98 -  prints all natural numbers from n to 98 .
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		n++;
	}
	else (n > 98)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n + '0');
		n--;
	}
	_putchar('\n');
}
