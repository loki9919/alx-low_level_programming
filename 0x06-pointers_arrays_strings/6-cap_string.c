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

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i - 1] == sep[j] || i == 0)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
