#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer.
 * Return: head node's.
 */
int pop_listint(listint_t **head)
{
	int hn;
	listint_t *n;
	listint_t *s;

	if (*head == NULL)
		return (0);

	s = *head;

	hn = s->n;

	n = s->next;

	free(s);

	*head = n;

	return (hn);
}
