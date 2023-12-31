#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: Address of the first node in the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *ne = NULL;

	while (*head)
	{
		ne = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = ne;
	}

	*head = pr;

	return (*head);
}
