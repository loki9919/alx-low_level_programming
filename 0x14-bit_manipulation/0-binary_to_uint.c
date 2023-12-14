#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0, ct = 0, mul = 1;
	unsigned int dec = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		if ((b[a] - '0') != 0 && (b[a] - '0') != 1)
			return (0);
		ct++;
		a++;
	}
	for (a = ct - 1; a >= 0; a--)
	{
		if (b[a] == '1')
			dec += mul;
		mul = mul * 2;
	}
	return (dec);
}
