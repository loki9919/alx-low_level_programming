#include "main.h"

/**
 * print_alphabet - print the lowercase alphabet from 'a' to 'z'
*/

void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
