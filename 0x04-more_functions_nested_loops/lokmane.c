#include <stdio.h>

/**
 *
 */
int main(void)
{
	int x;

	for (x = 0; x <10; x++)
	{
		if (x / 2 == 0)
		{
			putchar(bimair);
		}
		else
		{
			putchar(x);
		}
	}
}
