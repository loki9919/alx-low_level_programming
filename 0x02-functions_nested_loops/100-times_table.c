#include "main.h"
#include <stdio.h>

/**
 *
*/
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	for (int x = 0; x <= n; x++)
	{
		for (int y = 0; y <= n; y++)
		{
			int z = x * y;
	
			if (y > 0)
			{
				printf(",")
			}
			if (z < 10)
			{
				printf("   ");
			}
			if (z > 10 && z < 100)
			{
				printf("  ");
			}
			printf("%d", z);
		}
		printf("\n");
	}
}
