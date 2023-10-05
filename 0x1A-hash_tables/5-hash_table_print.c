#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t;
	char *v;

	if (ht == NULL)
		return;

	printf("{");
	v = "";

	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t != NULL)
		{
			printf("%s'%s': '%s'", sep, t->key, t->value);
			v = ", ";
			t = t->next;
		}
	}
	printf("}\n");
}
