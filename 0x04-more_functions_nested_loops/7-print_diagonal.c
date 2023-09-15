#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
	long char i;

		for (i = 0; i <= n; i++)
		{
			long char j;

			for (j = 0; j <= n; j++)
				if (j == n)
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
	else
	{	
			_putchar('\n');
		
	}
}
