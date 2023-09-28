#include "main.h"

/**
 * factorial - factorialof a number
 * @n: the given number
 *
 * Return: the factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
