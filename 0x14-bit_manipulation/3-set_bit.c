#include "main.h"

/**
 * set_bit - sets bit to 1 at given index
 * @n: pointer to int
 * @index: spot to set bit to 1 at
 * Return: 1 if it worked, or -1 if an error occurred
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
