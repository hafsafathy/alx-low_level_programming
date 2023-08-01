#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop
 * in a linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts
 *  or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *x;

	p = head;
	x = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = x;
			x =  p;
			while (1)
			{
				p = x;
				while (p->next != head && p->next != x)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}
