#include <stdio.h>

/**
 * main - this is main function
 * Return: always 0
*/
int main(void)
{
	unsigned int N = 0;

	while (N <= 9)
{
	putchar(N + '0');
	N++;
}
	putchar('\n');
	return (0);
}
