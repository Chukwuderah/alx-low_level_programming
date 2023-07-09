#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a1 = 0, n2 = 0;

	if (argc == 3)
	{
		a1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", a1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
