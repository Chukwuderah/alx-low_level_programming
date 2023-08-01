#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list
 * @head: first node in the listint_t list
 * @index: index of the node to be returned
 * Return: Address of the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *t = head;

	while (t && a < index)
	{
		t = t->next;
		a++;
	}

	return (t ? t : NULL);
}
