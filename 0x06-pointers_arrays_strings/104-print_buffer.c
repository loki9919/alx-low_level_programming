#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer to be printed.
 * @size: Number of bytes to print from the buffer.
 *
 * Description: The function prints the content of the buffer in a specific
 * format. It prints 10 bytes per line, showing the position in hexadecimal,
 * the hexadecimal content, and the content of the buffer (as printable
 * characters or '.').
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}
		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= ' ' && b[j] <= '~')
					printf("%c", b[j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
