#include "lists.h"

/**
 * sum_listint - function calculate sum of all the data of list.
 *
 * @head: head of single linked list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
