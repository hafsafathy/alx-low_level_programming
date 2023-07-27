#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list.
 * @head: head of list.
 * @str: string .
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;
	size_t h;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (h = 0; str[h]; h++)
		;

	n->len = h;
	n->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = n;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}

	return (*head);
}
