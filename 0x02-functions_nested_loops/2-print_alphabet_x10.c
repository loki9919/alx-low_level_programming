#include "main.h"

/**
 *print_alphabet_x10 - print all alphabets X10
*/
void print_alphabet_x10(void)
{
	char letters;
	int i;

	i = 0;
	while (i < 10)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		i++;
	}
}
