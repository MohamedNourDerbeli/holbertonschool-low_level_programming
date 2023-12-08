#include "hash_tables.h"

/**
 * key_index - check the code
 * @size: long int
 * @key: char
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int res;
	hash_node_t *node;
	if (!key || ht)
		return (0);
	res = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[res];
	while (node)
	{
		if (strcmp(node->value, value) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
				return (0);
			return (1);
		}
		node = node->next;
	}

	return (1);
}
