#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary number to be printed
 */

void print_binary(unsigned long int n)
{
	int a, c = 0;
	unsigned long int crt;

	for (a = 63; a >= 0; a++)
	{
		crt = n >> a;

		if (crt & 1)
		{
			_putchar('1');
			c++;
		}

		else if (c)
			_putchar('0');
	}

	if (!c)
		_putchar('0');
}
