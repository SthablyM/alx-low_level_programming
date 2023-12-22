#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table.
 *@ht: pointer
 *Description: key/value pairs are printed in order
 *	they apper in the array of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	unsigned char comma_flag;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(",");
			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(",");
			}
			comma_flag = 1;
		}

	}
	printf("}\n");
}
