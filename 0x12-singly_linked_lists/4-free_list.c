#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: head of node.
 */

void free_list(list_t *head)
{
	list_t *node, *tmp;

	if (!head)
		return;

	node = head;
	while (node)
	{
		tmp = node->next;
		free(node->str);
		free(node);
		node = tmp;
	}
}
