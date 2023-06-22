#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 * @n: The number of time diagonal line to be printed
 * Return: empty
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < n; b++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
