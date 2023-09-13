#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;
	while (x <= 9)
	{
		y = 0;
		{
			z = x * y;
			putchar(z % 10 + '0');
			y++;
		} 
		while (y <= 9)
		putchar('\n');
		x++;
	}
}

