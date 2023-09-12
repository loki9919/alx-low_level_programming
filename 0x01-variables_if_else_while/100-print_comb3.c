#include <stdio.h>

/**
 * main - this is the main function
 * Return: always 0
*/
int main(void)
{
	unsigned int first_digit = 0;

	while (first_digit < 9)
	{
		unsigned int second_digit = first_digit + 1;

		while (second_digit <= 9)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			if (first_digit != 8)
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
