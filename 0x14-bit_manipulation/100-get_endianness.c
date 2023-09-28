#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: for big 0, little, 1
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
