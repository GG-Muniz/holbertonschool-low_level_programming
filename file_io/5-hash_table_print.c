#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: Prints key/value pairs in the order they appear in the array,
 * followed by the linked lists. Format: {'key': 'value', ...}
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first_pair = 1; /* Flag to track if it's the first key/value pair */

	/* If hash table is NULL, do nothing */
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			/* Print comma after first pair */
			if (!first_pair)
				printf(", ");
			first_pair = 0;

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
