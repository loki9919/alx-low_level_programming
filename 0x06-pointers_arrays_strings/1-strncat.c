#include "main.h"

/**
 * _stencat - Concatenates two strings up to n bytes from src.
 * @dest: the distination string
 * @src: the source string
 * @n: the maximum nuber of bytes to concatenate from rsc
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
