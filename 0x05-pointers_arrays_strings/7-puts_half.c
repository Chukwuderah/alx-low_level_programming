#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * if odd len, n = (length_of_the_string - 1)/ 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a, n, longey;

	longey = 0;

	for (a = 0; str[a] != '\0'; a++)
		longey++;

	n = (longey / 2);

	if ((longey % 2) == 1)
		n = ((longey + 1) / 2);

	for (a = n; str[0] != '\0'; a++)
		_putchar('\n');
}
