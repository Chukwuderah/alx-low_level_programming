#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: Address of the first node in the listint_t list
 * Return: Number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *t;

	if (!h || !h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			l++;
		}

		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
