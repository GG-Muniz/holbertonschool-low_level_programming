#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	/* Return NULL if h is NULL */
	if (h == NULL)
		return (NULL);

	/* If index is 0, use add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to the position before the desired index */
	current = *h;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* Return NULL if index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* If inserting at the end, use add_dnodeint_end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set new node values and connect it to the list */
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
