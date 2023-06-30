#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: String to be appended upon
 * @src: String to be appended to dest
 * @n: The number of bytes to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int food = 0, dest_len = 0;

	while (dest[food++])
		dest_len++;
	for (food = 0; src[food] && food < n; food++)
		dest[dest_len++] = src[food];
	return (dest);
}
