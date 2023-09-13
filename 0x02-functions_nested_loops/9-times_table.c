#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int x = 0;
	int y, z;
	
	while (x <= 9)
	{
		y=0;
		while ( y <= 9)
		{
			z = x * y;
			if (y == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			if (z <= 9)
			{
				_putchar(' ');
			}
		}
		-putchar((z % 10) + '0');
		if (y == 9)
		{
			_putchar('\n');
			}
			y++;
		}
		x++;
	}
}
		
