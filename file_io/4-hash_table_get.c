#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	/* Check if hash table or key is NULL or if key is empty */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index for this key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Look for the key in the linked list at this index */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	/* Key not found */
	return (NULL);
}
