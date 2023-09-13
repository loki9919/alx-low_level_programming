#include "mian.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x = 0;
	int y, row, col;

	row = 0;
	while (x <= 0)
	{
		y = 0;
		col = 0;
		while (y <= 9)
		{
			_putchar(x * y + '0');
			col++;
			if (col == 9)
			{
				_putchar('\n');
				col == 0;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		x++;
	}
}
