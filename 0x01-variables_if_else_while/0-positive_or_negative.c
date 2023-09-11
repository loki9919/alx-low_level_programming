#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* i include the <stdio.h> for printf command */

/* main - this is main function */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
		printf("%d is positive\n", n);
}
	else if (n < 0)
{
		printf("%d is negative\n", n);
}
	else
{
		printf("%d is zero\n", n);
}
	return (0);
}
