#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be changed
 * Return: A pointer to the changed string
 */

char *string_toupper(char *str)
{
	int food = 0;

	while (str[food])
	{
		if (str[food] >= 'a' && str[food] <= 'z')
			str[food] -= 32;
		food++;
	}
	return (str);
}
