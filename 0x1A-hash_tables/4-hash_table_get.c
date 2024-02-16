#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key.
 *@ht: the hash table you want to look into
 *@key: the key you are looking for
 *Return:  value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int index = 0;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[index];

	while (n)
	{
		if (!strcmp(key, n->key))
			return (n->value);
		n = n->next;
	}
	return (NULL);
}
