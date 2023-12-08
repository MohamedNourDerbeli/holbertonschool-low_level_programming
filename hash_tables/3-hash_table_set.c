#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @value: long int
 * @key: char
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int res;
	hash_node_t *node, *now_node;

	if (!key || !ht)
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
	now_node = malloc(sizeof(hash_node_t));
	if (!now_node)
		return (0);
	now_node->key = strdup(key);
	if (!node->key)
	{
		free(now_node);
		return (0);
	}
	now_node->value = strdup(value);
	if (!node->value)
	{
		free(now_node->key);
		free(now_node);
		return (0);
	}
	now_node->next = ht->array[res];
	ht->array[res] = now_node;

	return (1);
}
