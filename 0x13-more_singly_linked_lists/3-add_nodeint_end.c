#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node to the end of
 * a listint_t list.
 * @head: pointer.
 * @n: integer input.
 * Return: The address of the new element, or NULL  if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *no, *t;

	no = malloc(sizeof(listint_t));
	if (no == NULL)
		return (NULL);

	no->n = n;
	if (*head == NULL)
	{
		no->next = *head;
		*head = no;
	}
	else
	{
		no->next = NULL;
		t = *head;
		while (t->next)
			t = t->next;
		t->next = no;
	}
	return (no);
}
