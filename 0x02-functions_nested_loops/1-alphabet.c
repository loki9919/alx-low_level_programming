#include "main.h"

/**
 * main - this is the main function
 * Retur: always 0
 * print_alphabet - to print an alphabet
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
