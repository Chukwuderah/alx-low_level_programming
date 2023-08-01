#include "lists.h"

/**
 * listint_len - Returns the numbers of elements in a linked listint_t list
 * @h: Linked list of type listint_t
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}

	return (b);
}
