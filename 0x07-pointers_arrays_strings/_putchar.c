#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c tp stdout
 * @c: Character to be printed
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
