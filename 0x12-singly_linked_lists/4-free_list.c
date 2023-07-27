#include "lists.h"

/**
 * free_list - function that frees all elements in a linked list
 * @head: head of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *t;

	t = head;
	while (head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
	free(head);
}
