#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: input
 * Return: the actual number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - check the actual prime
 * @n: input
 * @i: checker number
 * Return: if n is a prime number return 1, other wise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
