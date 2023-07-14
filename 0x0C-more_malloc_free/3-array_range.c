#include "main.h"
#include <stlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored, and number of elements
 * Return: pointer to a new array
 */

int *array_range(int min, int max)
{
	int *s;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (a = 0, min <= max; a++)
		s[a] = min++;

	return (s);
}
