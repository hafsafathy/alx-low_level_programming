#include "hash_tables.h"


/**
 * shash_table_create - function creates a hash table.
 * @size: size of hash table.
 * Return: pointer.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *nt = NULL;

	nt = malloc(sizeof(shash_table_t));
	if (!nt)
		return (NULL);
	nt->size = size;
	nt->array = malloc(sizeof(shash_node_t *) * size);
	if (!nt->array)
	{
		free(nt);
		return (NULL);
	}
	for (; i < size; i++)
		(nt->array)[i] = NULL;
	return (nt);
}

/**
 * shash_table_set - function sets a key value.
 * @ht: pointer.
 * @key: the key.
 * @value: the value.
 * Return: 1 on success, or 0 on otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ix = 0;
	char *value_dup = NULL, *key_dup = NULL;
	shash_node_t *nn = NULL, *t_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);
	nn = malloc(sizeof(shash_node_t));
	if (!nn)
		return (0);
	nn->key = key_dup;
	nn->value = value_dup;
	nn->next = NULL;
	ix = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[ix] != NULL)
	{
		t_node = (ht->array)[ix];
		while (t_node)
		{
			if (strcmp(t_node->key, key_dup) == 0)
			{
				free(ht->array[ix]->value);
				ht->array[ix]->value = value_dup;
				free(key_dup);
				free(nn);
				return (1);
			}
			t_node = t_node->next;
		}
		t_node = (ht->array)[ix];
		nn->next = t_node;
		(ht->array)[ix] = nn;
	}
	else
		(ht->array)[ix] = nn;
	return (1);
}

/**
 * shash_table_get - function  gets key and value.
 * @ht: pointer.
 * @key: the key.
 * Return: The value associated to key, or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ix = 0;
	char *v = NULL;
	shash_node_t *n;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	ix = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[ix] == NULL)
		return (NULL);

	n = ht->array[ix];
	while (!v)
	{
		if (strcmp(n->key, key) == 0)
			v = node->value;
		n = node->next;
	}
	return (v);
}

/**
 * shash_table_print - prints hash table.
 * @ht: hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0, ls = 0;
	shash_node_t *n = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; i < ht->size - 1; i++)
		{
			if (ht->array[i] != NULL)
				ls = i;
		}

		for (i = 0; i <= ls; i++)
		{
			n = ht->array[i];
			while (n)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (i < ls - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - function frees a hash table.
 * @ht: pointer.
 *Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				while (node)
				{
					next_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
