#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 *
 * @head: head of single linked list.
 * @n: number added to node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *h = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}

	node->n = n;

	if (h)
	{
		while (h->next)
		{
			h = h->next;
		}

		node->next = NULL;
		h = node;
	}
	else
		*head = node;


	return (node);
}
