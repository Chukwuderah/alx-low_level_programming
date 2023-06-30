#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to be copied from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int food = 0, src_len = 0;

	while (src[food++])
		src_len++;

	for (food = 0; src[food] && food < n; food++)
		dest[food] = src[food];

	for (food = src_len; food < n; food++)
		dest[food] = '\0';

	return (dest);
}
