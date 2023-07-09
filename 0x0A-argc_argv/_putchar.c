#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 * Return: On success 1, otherwise 0
 */

int _putchar(char c)
{
        return(write(1, &c, 1));
}
