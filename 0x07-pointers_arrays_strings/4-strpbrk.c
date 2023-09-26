#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;
	int r;
	int found;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (n);
		}
		n++;
		s++;
	}
	return (n);
}
