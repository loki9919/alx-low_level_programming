#include "main.h"

/**
 * print_numbers - print number from 0 to 9
*/
void print_numbers(void)
{
	int a;

	for (a = '0'; a < '10'; a++)
	{
		_putchar(a);
		_putchar('\n');
	}
}
