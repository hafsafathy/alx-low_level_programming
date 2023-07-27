#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list.
 * @head: head of list.
 * @str: string input
 * Return: he address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t c;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	n->len = c;
	n->next = *head;
	*head = n;

	return (*head);
}
