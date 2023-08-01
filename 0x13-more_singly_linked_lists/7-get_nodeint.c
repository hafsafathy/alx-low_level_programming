#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer.
 * @index: is the index of the node, starting at 0.
 * Return: pointer to node,
 * if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
