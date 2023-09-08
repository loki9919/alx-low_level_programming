#include <unistd.h>
#include <string.h>
/**
 * main - this main function prints a message and returns 1
 * Return: 1
 */
int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t length = strlen(quote);
	write(1, quote, lentgh);
	return (1);
}
