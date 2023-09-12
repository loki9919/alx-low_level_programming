#include <stdio.h>

/**
 * main - this is the main function
 * Return: always 0
*/
int main(void)
{
	unsigned int num1 = 0;

	while (num1 < 99)
	{
		unsigned int num2 = num1 + 1;

		while (num2 <= 99)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');
			if (num1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
