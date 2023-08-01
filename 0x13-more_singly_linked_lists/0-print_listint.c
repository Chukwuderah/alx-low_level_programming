#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Linked list of type listint_t list
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
