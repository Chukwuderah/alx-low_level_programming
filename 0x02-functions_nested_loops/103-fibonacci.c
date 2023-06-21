#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers
 * less than 4000000
 * Return: 0
 */

int main(void)
{
	int c = 0;
	long e = 1, k = 2, sum = k;

	while (k + e < 4000000)
	{
	k += e;
	if (k % 2 == 0)
	sum += k;
	e = k - e;
	++c;
	}
	printf("%ld\n", sum);
	return (0);
}
