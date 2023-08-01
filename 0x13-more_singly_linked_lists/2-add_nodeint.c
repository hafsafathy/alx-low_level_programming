#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function that adds a new nod at the begining
 * of a listint_t list.
 * @head: pointer.
 * @n: integer input.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *no;

	no = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = no;
	return (*head);
}
