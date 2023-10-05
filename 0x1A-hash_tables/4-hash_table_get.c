#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value
 * associated with a key.
 * @ht: is the hash table you want to look into.
 * @key:  is the key you are looking for.
 * Return: the value associated with the element
 * , or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *t;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	t = ht->array[i];

	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}

	return (NULL);
}
