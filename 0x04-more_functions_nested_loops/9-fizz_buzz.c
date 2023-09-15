#include <stdio.h>

/**
 * main - numbers from 1 to 100 with fizz buzz
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			if (x < 10)
			{
				printf("%d ", x);
			}
			else
			{
				printf("%d%d ", x / 10, x % 10);
			}
		}
	}
	printf("\n");
	return (0);
}
