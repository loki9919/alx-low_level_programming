#include "main.h"

/**
 * *_stract - function that concatenates two strings.
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_leng = 0;
	int src_index = 0;
	while (dest[dest_leng] != '\0')
	{
		dest_leng++;
	}
	while (src[src_index] != '\0')
	{
		dest[dest_leng] = src[src_index];
		dest_leng++;
		src_index++;
	}
	dest[dest_leng] = '\0';
	return (dest);
}
