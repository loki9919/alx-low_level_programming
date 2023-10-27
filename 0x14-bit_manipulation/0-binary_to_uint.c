#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, mul = 1, c;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	for (c = 0; b[i] != '\0'; c++)
	{
		if ((b[i] - '0') != 0 && (b[i] - '0') != 1)
			return (0);
		i++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			dec += mul;
		mul = mul * 2;
	}
	return (dec);
}
