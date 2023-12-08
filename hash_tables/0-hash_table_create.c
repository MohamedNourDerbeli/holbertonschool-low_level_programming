#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 * @size: unsigned long int
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_node_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	return (hash);
}
