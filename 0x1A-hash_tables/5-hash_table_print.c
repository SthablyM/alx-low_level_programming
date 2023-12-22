#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table.
 *@ht: pointer
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (current != NULL)
			{
				printf(",");
			}
		}
	}
	printf("}\n");
}
