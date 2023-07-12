#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * Return: The two concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, ci;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = ci = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
		ci++;
	s = malloc(sizeof(char) * (i + ci + 1));

	if (s == NULL)
		return (NULL);

	i = ci = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		s[i] = s2[ci];
		i++, ci++;
	}

	s[i] = '\0';
	return (s);
}
