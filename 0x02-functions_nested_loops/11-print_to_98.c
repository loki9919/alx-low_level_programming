#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98 .
 * @n: starting number.
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			/* print the current number */
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		else
		{
			/* print the current number */
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	/**
	 *  print the final number, 98
	 */
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
