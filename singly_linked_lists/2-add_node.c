#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	/* Duplicate string */
	str_dup = strdup(str);
	if (str_dup == NULL)
		return (NULL);

	/* Calculate string length */
	while (str[len])
		len++;

	/* Create new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_dup);
		return (NULL);
	}

	/* Initialize new node */
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	/* Update head to point to new node */
	*head = new_node;

	return (new_node);
}
