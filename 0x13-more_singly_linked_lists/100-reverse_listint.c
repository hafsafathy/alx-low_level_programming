#include "lists.h"

/**
 * reverse_listint - function that reverses
 * a listint_t linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *n;

	h = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = h;
		h = *head;
		*head = n;
	}

	*head = h;
	return (*head);
}
