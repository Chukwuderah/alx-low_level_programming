#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int longey = 0;
	int o;


	while (*s != '\0')
	{
		longey++;
		s++;
	}
	s--;
	for (o = longey; o > 0; o--)
	{
		_putchar(*s);
		s--
	}

	_putchar('\n');
}
