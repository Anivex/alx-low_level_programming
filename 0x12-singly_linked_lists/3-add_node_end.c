#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: head of single linked list.
 * @str: string.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *h = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL || head == NULL)
		return (NULL);

	while (h->next)
	{
		*h = *h->next;
	}

	if (str)
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		node->len = strlen(str);
	}

	h->next = node;

	return (node);
}
