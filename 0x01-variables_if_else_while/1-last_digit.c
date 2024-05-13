#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks if last of number provided
 * is greater than 5, is 0, or 6 and is not zero
 * Return: void
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	} else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	printf("\n");
	return (0);
}
