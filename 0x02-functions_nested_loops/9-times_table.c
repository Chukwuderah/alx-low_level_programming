#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */

void times_table(void)
{

	int x, y, Z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	Z = x * y;
	if (Z > 9)
	{
	u = Z % 10;
	d = (Z - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(u + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(Z + '0');
	}
	}
	_putchar('\n');
	}
}
