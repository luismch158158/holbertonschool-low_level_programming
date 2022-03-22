#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * of a linked list
 *
 * @head: pointer to head
 *
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder, *delete, *node = *head, *counting = *head;
	size_t counter = 0, j;

	if (*head == NULL)
		return (-1);

	while (counting->next != NULL)
	{
		counter++;
		counting = counting->next;
	}
	if (counter < index)
		return (-1);

	if (index == 0)
	{
		delete = *head;
		holder = delete->next;
		*head = holder;
		free(delete);
	}
	else
	{
		for (j = 0; j < index - 1; j++)
		{
			node = node->next;
		}
		delete = node->next;
		node->next = delete->next;
		free(delete);
	}

	return (1);
}
