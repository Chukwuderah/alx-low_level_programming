#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first element in the listint_t list
 * Return: Resulting sum, 0 if empty
 */

int sum_listint(listint_t *head)
{
	int m = 0;
	listint_t *t = head;

	while (t)
	{
		m += t->n;
		t = t->next;
	}

	return (m);
}
