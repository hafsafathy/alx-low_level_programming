#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	t = *head;
	while (*head)
	{
		t = *head;
		(*head) = (*head)->next;
		free(t);
	}
	*head = NULL;
}
