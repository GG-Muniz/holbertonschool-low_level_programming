#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to delete (starts at 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	/* Check if list is empty */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Start at the beginning of the list */
	current = *head;

	/* Special case: delete first node (index 0) */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse list to find the node at index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* If index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Update pointers of surrounding nodes */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	/* Free the node */
	free(current);

	return (1);
}
