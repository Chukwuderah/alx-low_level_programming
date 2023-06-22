#include "main.h"

/**
 * _isdigit - Check that a character is a digit
 * @x: The number to be checked
 * Return: 1 for character that is a digit, 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
