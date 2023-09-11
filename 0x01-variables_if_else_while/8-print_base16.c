#include <stdio.h>

/**
 * main - this is main function
 * Return: always 0
*/
int main(void)
{
	unsigned char hex_digit = '0';

	while (hex_digit <= '9')
	{
		putchar(hex_digit);
		hex_digit++;
	}
	hex_digit = 'a';
	while (hex_digit <= 'f')
	{
		putchar(hex_digit);
		hex_digit++;
	}
	putchar('\n');
	return (0);
}
