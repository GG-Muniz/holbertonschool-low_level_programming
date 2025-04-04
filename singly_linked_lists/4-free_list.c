#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		/* Save next node before freeing current node */
		next_node = current_node->next;

		/* Free allocated string */
		if (current_node->str != NULL)
			free(current_node->str);

		/* Free current node */
		free(current_node);

		/* Move to next node */
		current_node = next_node;
	}
}
