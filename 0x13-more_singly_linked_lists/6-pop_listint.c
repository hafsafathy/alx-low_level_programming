#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * listint_t linked list,returns the head node's data(n).
 * @head: pointer.
 * Return: if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *no;
	int s;

	if (*head == NULL)
		return (0);

	s = (*head)->s;
	no = (*head)->next;
	free(*head);
	*head = no;
	return (s);
}
