#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string where the binary number is contained
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int bin;
	unsigned int d_v = 0;

	if (!b)
		return (0);

	for (bin = 0; b[bin]; bin++)
	{
		if (b[bin] < '0' || b[bin] > '1')
			return (0);
		d_v = 2 * d_v + (b[bin] - '0');
	}

	return (d_v);
}
