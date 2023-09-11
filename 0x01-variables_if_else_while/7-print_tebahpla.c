#include <stdio.h>

/**
 * main - this is main function
 * Return: always 0
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
