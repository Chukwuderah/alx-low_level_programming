#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: the source string
 * Return: A pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
