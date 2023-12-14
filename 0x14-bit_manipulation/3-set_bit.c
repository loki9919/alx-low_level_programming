#include "main.h"

/**
 * set_bit - program sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned int size = sizeof(n) * 8;

	if (index >= size )
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
