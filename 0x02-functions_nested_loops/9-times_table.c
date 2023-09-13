#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * @x: first digit 
 * @y: second digit
 * @z: x * y
*/
void times_table(void)
{
	while (x < 10)
	{
		while (y < 10)
		{
			y = 0;
			z = y * x;
			_putchar(z + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			y++;
		}
		x++:
	}
}
