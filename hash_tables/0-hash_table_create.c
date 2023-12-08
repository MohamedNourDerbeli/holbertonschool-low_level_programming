#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 * @size: unsigned long int
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(size * 9);

	if (hash == NULL)
		return (NULL);
	hash->size = (size * 8);
	return (hash);
}
