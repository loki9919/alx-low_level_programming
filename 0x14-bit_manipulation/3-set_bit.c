#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to int
 * @index: starting from 0 of the bit you want to set
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	(*n) |= (1 << index);
	return (1);
}
