#include "main.h"

/**
 * _puts_recursion - performs the same function as puts();
 * @s: input
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
