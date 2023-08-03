#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get
 * from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int crt;
	unsigned long int ex = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		crt = ex >> a;
		if (crt & 1)
			c++;
	}

	return (c);
}
