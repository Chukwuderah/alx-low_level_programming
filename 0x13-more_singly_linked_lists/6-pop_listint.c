#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: Address of the first element in the listint_t list
 * Return: The data inside the deleted element, or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (m);
}
