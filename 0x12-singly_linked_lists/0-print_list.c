#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: singly linked list
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;
	list_t *node;

	node = h;
	while(node)
	{
		printf("[%u] %s", node->len, str ? str : "(nil)");
		node = node->next;
	}

	return (size);
}
