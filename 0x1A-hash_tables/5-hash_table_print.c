#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table.
 *@ht: The hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *n;
	int j = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];
		while (n)
		{
			if (j)
				printf(",");
			printf("%s': '%s'", n->key, n->value);
			j = 1;
			n = n->next;
		}
	}
	printf("}\n");
}
