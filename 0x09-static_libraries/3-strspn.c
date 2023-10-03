#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 *
 * Return:  the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = '\0';
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
