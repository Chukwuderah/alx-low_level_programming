#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a listint_t list
 * @head: Pointer to the first element in the list
 * @n: Content of the new element
 * Return: Pointer to the new element if successful, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *tem = *head;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = end;

	return (end);
}

