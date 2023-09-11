#include <stdio.h>

/**
 * main - print alphabet
 * Return: always 0
*/
int main(void)
{
	char lowercase = 'a';
	char upercase = 'A';

	while (lowercase <= z)
{
	putchar(lowercase);
	lowercase++;
}
	while (upercase <= Z)
{
	putchar(upercase);
	upercase++;
}
	putchar('\n');
	return (0);
}
