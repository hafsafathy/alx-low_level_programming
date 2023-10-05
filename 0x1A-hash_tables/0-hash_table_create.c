#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table,
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	hash_node_t **arr;
	unsigned long int i;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	t->arr = arr;
	t->size = size;

	return (t);
}
