#include "hash_tables.h"
/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: The hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n, *aux_fre;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];
		while (n)
		{
			aux_fre = n;
			n = n->next;
			if (aux_fre->key)
				free(aux_fre->key);
			if (aux_fre->value)
				free(aux_fre->value);
			free(aux_fre);
		}
	}
	free(ht->array);
	free(ht);
}
