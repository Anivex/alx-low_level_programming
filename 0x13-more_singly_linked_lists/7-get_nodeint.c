#include "lists.h"


/**
 * get_nodeint_at_index - function that returns the nth node of a list.
 *
 * @head: head of single linked list.
 * @index: the nth node.
 *
 * Return: node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	node = head;
	while (node)
	{
		if (index == 0)
			return (node);
		index--;
		node = node->next;
	}
	return (NULL);

}
