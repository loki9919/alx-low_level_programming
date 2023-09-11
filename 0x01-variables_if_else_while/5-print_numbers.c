#include <stdio.h>

/**
 * main - this is main function
 * Return: always 0
*/
int main(void)
{
	unsigned char N = '0';

	while (N <= 10)
{
	printf("%c%c", N, N++);
}
	return (0);
}
