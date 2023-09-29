#include "main.h"

int checker(int n, int i);

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
	return (checker(n, n - 1));
}
/**
 * checker - check the actual prime
 * @n: input
 * @i: checker number
 * Return: if n is a prime number return 1, other wise 0
 */
int checker(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (checker(n, i - 1));
}
