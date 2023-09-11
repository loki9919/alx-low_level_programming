#include <stdio.h>

/**
 * main - print alphabet
 * Return: always 0
*/
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= z)
{
	putchar(lowercase);
	lowercase++;
}
	putchar('\n');
	return (0);
}
