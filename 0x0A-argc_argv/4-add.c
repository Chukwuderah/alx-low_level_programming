#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned int k, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			c = argv[a];

			for (k = 0; k < strlen(c); k++)
			{
				if (c[k] < 48 || c[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
