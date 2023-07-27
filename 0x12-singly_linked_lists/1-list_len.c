#include "lists.h"
/**
 * list_len - function that returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
