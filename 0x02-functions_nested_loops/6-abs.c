#include "main.h"

/**
 * _abs - Enters the absolute value of a integer
 * @c: The number to be entered
 * Return: Value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
