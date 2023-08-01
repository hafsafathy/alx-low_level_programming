#include "lists.h"

/**
 * free_listp2 - free list
 * @head: head of a list.
 * Return: no return.
 */
void f_list(plist_t **head)
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
 * free_listint_safe - function that frees a listint_t list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	plist_t *ptr, *no, *plus;
	listint_t *curr;

	ptr = NULL;
	while (*h != NULL)
	{
		no = malloc(sizeof(plist_t));

		if (no == NULL)
			exit(98);

		no->p = (void *)*h;
		no->next = ptr;
		ptr = no;

		plus = ptr;

		while (plus->next != NULL)
		{
			plus = plus->next;
			if (*h == plus->p)
			{
				*h = NULL;
				f_list(&ptr);
				return (node);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		node++;
	}

	*h = NULL;
	f_list(&ptr);
	return (node);
}
