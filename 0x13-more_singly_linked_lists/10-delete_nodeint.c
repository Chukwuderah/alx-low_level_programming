#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: Address of the first node in the list
 * @index: index of the node to be deleted
 * Return: 1 (Success) or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *present = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (a < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		a++;
	}

	present = t->next;
	t->next = present->next;
	free(present);

		return (1);
}
