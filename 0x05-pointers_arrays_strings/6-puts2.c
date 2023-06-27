#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longey = 0;
	int b = 0;
	char *y = str;
	int o;


	while (*y != '\0')
	{
		y++;
		longey++;
	}
	b = longey - 1;
	for (o = 0; o <= b; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
