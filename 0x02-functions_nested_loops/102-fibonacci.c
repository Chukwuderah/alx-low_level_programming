#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int c = 0;
	long e = 1, k = 2;

	while (c < 50)
	{
	if (c == 0)
	printf("%ld", e);
	else if (c == 1)
	printf(", %ld", k);
	else
	{
	k += e;
	e = k - e;
	printf(", %ld", k);
	}
	++c;
	}
	printf("\n");
	return (0);
}
