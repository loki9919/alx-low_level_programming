#include <stdio.h>
#include "main.h"

/**
 * main - this is the main function
 * Return: always 0
*/
int main(void)
{
	print_alphabet();
	return (0);
	}
	void print_alphabet(void)
	char alph = 'a'
{
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
}
