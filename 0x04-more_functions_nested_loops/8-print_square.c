#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y <= x; y++)
			{
				if (y < x)
				{
					_putchar('#')
				}
				if else(y == x)
				{
					_putchar('#');
					_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
}
