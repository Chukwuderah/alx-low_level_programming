#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to be stored in
 * @src: memory to be copied
 * @n: number of bytes
 * Return: copied memory with n bytes chnaged
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
