#include "lists.h"

/**
 * list_len - function calcule length of list.
 *
 * @h: head of single list.
 *
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
