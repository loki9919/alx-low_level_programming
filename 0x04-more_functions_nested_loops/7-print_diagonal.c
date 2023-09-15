#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
			
		}
	}
	else
	{
		_putchar('\n');
	}
}
