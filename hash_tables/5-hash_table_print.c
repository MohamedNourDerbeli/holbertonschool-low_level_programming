#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	if (!ht)
		return;

	printf("\n{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (node->next== NULL)
				printf("'%s': '%s'", node->key, node->value);
			else
				printf("'%s': '%s', ", node->key, node->value);
			break;
		}

		i++;
	}
	printf("}");
}
