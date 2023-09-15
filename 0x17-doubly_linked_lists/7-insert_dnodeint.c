#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position.
 * @h: head of the list.
 * @idx: index of the new node.
 * @n: value of the new node.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *m;
	dlistint_t *y;
	unsigned int i;

	m = NULL;
	if (idx == 0)
		m = add_dnodeint(h, n);
	else
	{
		y = *h;
		i = 1;
		if (y != NULL)
			while (y->prev != NULL)
				y = y->prev;
		while (y != NULL)
		{
			if (i == idx)
			{
				if (y->next == NULL)
					m = add_dnodeint_end(h, n);
				else
				{
					m = malloc(sizeof(dlistint_t));
					if (m != NULL)
					{
						m->n = n;
						m->next = y->next;
						m->prev = y;
						y->next->prev =m;
						y->next =m;
					}
				}
				break;
			}
			y = y->next;
			i++;
		}
	}

	return (m);
}
