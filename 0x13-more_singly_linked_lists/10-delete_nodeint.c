#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: head of a list.
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p;
	listint_t *x;

	p = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && p != NULL; i++)
		{
			p = p->x;
		}
	}

	if (p == NULL || (p->x == NULL && index != 0))
	{
		return (-1);
	}

	x = prev->x;

	if (index != 0)
	{
		p->x = x->x;
		free(x);
	}
	else
	{
		free(p);
		*head = x;
	}

	return (1);
}
