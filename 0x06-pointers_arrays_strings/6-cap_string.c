#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: A point to the changed string
 */

char *cap_string(char *str)
{
	int food = 0;

	while (str[food])
	{
		while (!(str[food] >= 'a' && str[food] <= 'z'))
			food++;
		if (str[food - 1] == ' ' ||
				str[food - 1] == '\t' ||
				str[food - 1] == '\n' ||
				str[food - 1] == ',' ||
				str[food - 1] == ';' ||
				str[food - 1] == '.' ||
				str[food - 1] == '!' ||
				str[food - 1] == '?' ||
				str[food - 1] == '"' ||
				str[food - 1] == '(' ||
				str[food - 1] == ')' ||
				str[food - 1] == '{' ||
				str[food - 1] == '}' ||
				food == 0)
			str[food] -= 32;
		food++;
	}
	return (str);
}
