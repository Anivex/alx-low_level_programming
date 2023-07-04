#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: head of single linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *h = *head;

	if (h)
	{
		while (h)
		{
			tmp = h->next;
			free(h);
			h = tmp;
		}
	}

	free(head);
}
