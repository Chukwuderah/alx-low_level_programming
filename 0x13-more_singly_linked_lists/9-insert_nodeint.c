#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Address of the first node in the list
 * @idx: index where new node is added
 * @n: Data to be inserted in the new node
 * Return: Address of the new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *m;
	listint_t *t = *head;

	m = malloc(sizeof(listint_t));
	if (!m || !head)
		return (NULL);

	m->n = n;
	m->next = NULL;

	if (idx == 0)
	{
		m->next = *head;
		*head = m;
		return (m);
	}

	for (a = 0; t && a < idx; a++)
	{
		if (a == idx - 1)
		{
			m->next = t->next;
			t->next = m;
			return (m);
		}

		else
			t = t->next;
	}

	return (NULL);
}
