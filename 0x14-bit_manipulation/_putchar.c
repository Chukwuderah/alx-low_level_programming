#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: Char to be printed
 * Reurn: 1 (Success), otherise -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
