#include <stdio.h>

/**
 * main - this is the main function
 * Return: always 0
*/
int main(void)
{
	unsigned int first_digit = 0;

		while (first_digit < 8)
		{
			unsigned int second_digit = first_digit + 1;

				while (second_digit <= 8)
				{
					unsigned int third_digit = second_digit + 1;

						while (third_digit <= 9)
						{
							putchar(first_digit + '0');
							putchar(second_digit + '0');
							putchar(third_digit + '0');
							if (first_digit != 7)
							{
								putchar (',');
									putchar (' ');
							}
							third_digit++;
						}
						second_digit++;
				}
				first_digit++;
		}
		putchar('\n');
		return (0);
}
