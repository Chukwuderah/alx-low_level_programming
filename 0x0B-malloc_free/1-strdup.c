#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copy/duplicate a string
 * @str: the string to duplicate
 * Return: the duplicate string
 */

char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *str;

	if (str == NULL)
		return (NULL);

	while (str[b])
	{
		b++;
	}

	str = malloc((sizeof(char) * b) + 1);

	if (str == NULL)
		return (NULL);

	while (a < b)
	{
		str[a] = str[a];
		a++;
	}

	str[a] = '\0';
	return (str);
}
