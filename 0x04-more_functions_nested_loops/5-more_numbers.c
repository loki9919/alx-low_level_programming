#include "main.h"

/**
 * more_numbers - print prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	char x = 0;

	while (x <= 14)
	{
		char y = 0;

		while (y <= 10)
		{
			if (x < 14)
			{
				_putchar(x);
				x++;
			}
			else
			{
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
}
