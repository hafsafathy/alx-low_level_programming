#include "lists.h"

/**
 * free_listint - function that frees listint_t list.
 * @head: pointer.
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
	free(head);
}
