#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98 .
 * @n: starting number.
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		int x;

		for (x = n; x <= 98; x++)
			if (x < 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d\n");
			}
	else
		{
		for (x = n; x >= 98; x--)
			if (x > 98)
			{
				prinf("%d, ", x);
			}
			else
			{
				Print("%d\n", x);
			}
		}
	}
}
