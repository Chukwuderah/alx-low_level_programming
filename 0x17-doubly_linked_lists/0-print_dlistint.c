#include "lists.h"


/**
 * print_dlistint - A function that prints
 * all the elements of a dlistint_t list.
 * 
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int c, count;
	c = count = 0;

	if (h == NULL)
		return 0;

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}


	return (c);
}

