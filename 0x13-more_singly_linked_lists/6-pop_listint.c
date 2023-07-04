#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: head of single linked list.
 *
 * Return:  the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *h = *head;
	int n;

	if (!head)
		return (0);

	tmp = h->next;
	n = h->n;
	free(h);
	h = tmp;

	return (n);
}
