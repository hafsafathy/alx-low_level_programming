#include "lists.h"

/**
 * free_list1 - free list
 * @head: head of a list.
 * Return: no return.
 */
void f_list1(plist_t **head)
{
	plist_t *t;
	plist_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *ptr, *no, *plus;

	ptr = NULL;
	while (head != NULL)
	{
		no = malloc(sizeof(plist_t));

		if (no == NULL)
			exit(98);

		no->p = (void *)head;
		no->next = ptr;
		ptr = no;

		plus = ptr;

		while (plus->next != NULL)
		{
			plus = plus->next;
			if (head == plus->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	f_list1(&ptr);
	return (node);
}
