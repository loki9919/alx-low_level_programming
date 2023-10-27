#include "main.h"

/**
  *print_binary - prints the binary representation of a number
  *@n: unsigned long int to be converted.
  *Return: always successful
  */
void print_binary(unsigned long int n)
{
	unsigned long int temp;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		temp = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(temp + '0');
	}
}
