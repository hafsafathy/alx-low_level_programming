#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *y;
	dlistint_t *m;

	m = malloc(sizeof(dlistint_t));
	if (m == NULL)
		return (NULL);

	m->n = n;
	m->next = NULL;

	y = *head;

	if (y != NULL)
	{
		while (y->next != NULL)
			y = y->next;
		y->next = m;
	}
	else
	{
		*head = m;
	}

	m->prev = y;

	return (m);
}
