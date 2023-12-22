#include "hash_tables.h"
/**
 *key_index - function that gives you the index of a key
 *@key: the key to get  the index
 *@size: size of array
 *Return: index of the key
 *Description: uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
