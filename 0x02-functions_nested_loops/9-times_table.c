#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x = 0;
	while (x <= 9)
	{
		int y = 0;

		while (y <= 9)
		{
			int z = x * y;

			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (z < 10)
				_putchar(' ');
			_putchar('0' + z / 10);
			_putchar('0' + z % 10);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
