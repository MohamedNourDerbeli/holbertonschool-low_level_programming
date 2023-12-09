#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;


	if (!ht)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (node->next == NULL)
			{
				free(node->value);
				free(node);
				break;
			}
			
		}
		i++;
	}
}
