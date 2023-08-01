#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: head of a list.
 * @idx:  is the index of the list where the new node
 * should be added
 * @n: integer .
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *no;
	listint_t *f;

	f = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && f != NULL; i++)
		{
			f = f->next;
		}
	}

	if (f == NULL && idx != 0)
		return (NULL);

	no = malloc(sizeof(listint_t));
	if (no == NULL)
		return (NULL);

	no->n = n;

	if (idx == 0)
	{
		no->next = *head;
		*head = no;
	}
	else
	{
		no->next = f->next;
		f->next = no;
	}

	return (no);
}
