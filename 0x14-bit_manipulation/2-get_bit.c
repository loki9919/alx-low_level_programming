#include "main.h"

/**
 * get_bit - get bit a specific index
 * @n: integer
 * @index:  index, starting from 0 of the bit you want to get
 * Return: value of bit at given index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
