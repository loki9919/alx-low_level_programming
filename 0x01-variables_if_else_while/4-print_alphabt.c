#include <stdio.h>

/**
 * main - print alphabet
 * Return: always 0
*/
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase++;
}
	if (lowercase == 'e')
{
	putchar('\0');
}
	if (lowercase == 'q')
{
	putchar('\0');
}
	putchar('\n');
	return (0);
}
