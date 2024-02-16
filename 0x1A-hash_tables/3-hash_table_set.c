#include "hash_tables.h"
/**
 *hash_table_set -  function that adds an element to the hash table
 *@ht: hash table you want to add or update the key/value to
 *@key: key can not be an empty string
 *@value: the value associated with the key
 *Return: 0 otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n, *new_node;
	char *key_copy, *value_copy;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[index];

	while (n)
	{
		if (!strcmp(key, n->key))
		{
			free(n->value);
			n->value = value_copy;
			return (1);
		}
		n = n->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
