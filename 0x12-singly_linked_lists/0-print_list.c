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

	while(h)
	{
		printf("[%u] %s", h->str ? strlen(h->str) : 0, h->str ? h->str : "(nil)");
		h = h->next;
		size++;
	}

	return (size);
}
