#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			s[r] = av[i][n];
			r++;
		}

		if (s[r] == '\0')
		{
			s[r++] = '\n';
		}
	}
	return (s);
}
