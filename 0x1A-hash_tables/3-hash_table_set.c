#include "hash_tables.h"


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key:  is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ix = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *t = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	ix = key_index((unsigned char *)key, ht->size);
	t = ht->array[ix];


	while (t && strcmp(t->key, key) != 0)
		t = t->next;


	if (t)
	{
		free(t->value);
		t->value = strdup(value);
		return (1);
	}



	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[ix];
	ht->array[ix] = new_node;

	return (1);
}
