#include "main.h"

/**
 * flip_bits - flip bits and count num of flips
 * @n: int
 * @m: int n
 * Return: the number of bits you would need to
 * flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int c;

	i = n ^ m;

	c = 0;
	while (i != 0)
	{
		if ((i & 1) == 1)
		{
			c++;
		}
		i = i >> 1;
	}
	return (c);
}
