#include "main.h"

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: the distination string
 * @src: the source string
 * @n: the max number of characters to copy from src
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
