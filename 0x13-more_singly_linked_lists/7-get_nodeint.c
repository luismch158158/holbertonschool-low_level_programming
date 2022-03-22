#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node
 * of a linked list
 *
 * @head: Pointer to head
 *
 * @index: index of node
 *
 * Return: the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *holder = head;
	listint_t *counting = head;
	size_t i, counter = 0;

	if (head == NULL)
		return (NULL);

	while (counting != NULL)
	{
		counting = counting->next;
		counter++;
	}

	if (counter < index)
		return (NULL);

	for (i = 0; i < index && holder != NULL; i++)
	{
		holder = holder->next;
	}

	return (holder);

}
