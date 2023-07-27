#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * main - prints a sentence
 * before the main function is excecuted
 */

void main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

