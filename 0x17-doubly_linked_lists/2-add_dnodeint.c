#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *m;
	dlistint_t *y;

	m = malloc(sizeof(dlistint_t));
	if (m == NULL)
		return (NULL);

	m->n = n;
	m->prev = NULL;
	y = *head;

	if (y != NULL)
	{
		while (y->prev != NULL)
			y = y->prev;
	}

	m->next = y;

	if (y != NULL)
		y->prev = m;

	*head = m;
	return (m);
}
