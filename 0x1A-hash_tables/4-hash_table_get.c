#include "hash_tables.h"
/**
 **hash_table_get - function that retrieves a value associated with a key
 *@ht: pointer
 *@key: key to get the value
 *Return: associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if  (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;
	return ((current == NULL) ? NULL : current->value);
}