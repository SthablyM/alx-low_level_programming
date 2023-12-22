#include "hash_tables.h"
/**
 **hash_table_create - function that creates a hash table.
 *@size: the size of array
 *Return: if error occurs  return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ht->array[j] = NULL;
	}
	ht->size = size;
	return (ht);
}
