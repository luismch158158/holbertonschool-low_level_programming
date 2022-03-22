#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at
 * a given position
 *
 * @head: pointer to head
 * @idx: index of the list where new node
 * @n: number to add in node
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *holder = *head, *temp = *head, *counting = *head, *new_node;
	size_t counter = 0, i;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (counting->next != NULL)
	{
		counting = counting->next;
		counter++;
	}

	if (counter < idx)
		return (NULL);

	for (i = 0; (i + 1) < idx; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	holder = temp->next;
	temp->next = new_node;
	new_node->next = holder;

	return (new_node);
}
