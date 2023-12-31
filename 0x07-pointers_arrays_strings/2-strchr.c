#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input
 * @c: input
 *
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
