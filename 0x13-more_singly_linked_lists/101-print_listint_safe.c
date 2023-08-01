#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints the elementsin a  list
 * @head: head of  list.
 * Return: number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *p = head, *ne = head;

	if (head == NULL)
		exit(98);

	while (p && ne && ne->next && head)
	{
		p = p->next;
		ne = ne->next->next;
		if (p == ne)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	head = NULL;
	return (node);
}
