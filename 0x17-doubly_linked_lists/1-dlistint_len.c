#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
