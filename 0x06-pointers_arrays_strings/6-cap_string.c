#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sep[14] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] -= 32;
				}
			}
		}
	}
	return (str);
}
