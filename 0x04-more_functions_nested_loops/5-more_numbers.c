#include "main.h"

/**
 * more_numbers - print prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	char x, y;
	
	for (x = 0; x <= 14; x++)
	{
		for (y = 0; y <= 10;y++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
