#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, food;

	for (food = n - 1; food >= n / 2; food--)
	{
		tmp = a[n - 1 - food];

		a[n - 1 - food] = a[food];
		a[food] = tmp;
	}
}
