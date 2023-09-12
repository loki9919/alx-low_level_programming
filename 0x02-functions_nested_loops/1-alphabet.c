#include "main.h"

/**
 * print_alphabet - print the lower case alphabet from 'a' to 'z' followed by new line
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
