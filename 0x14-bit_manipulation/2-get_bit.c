#include "main.h"

/**
  *get_bit - returns the value of a bit at a given index
  *@n: number
  *@index: index of bit
  *Return: value of bit at index or -1 if error occurs
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int temp;

	if (index > 64)
		return (-1);
	temp = (n >> index) & 1;

	return (temp);
}
