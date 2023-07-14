#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s1;
	char *old_s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	s1 = malloc(new_size);
	if (!s1)
		return (NULL);

	old_s = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			s1[i] = old_s[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s1[i] = old_s[i];
	}

	free(ptr);
	return (s1);
}
