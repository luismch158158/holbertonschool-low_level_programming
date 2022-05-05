#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of list
 *
 * @head: Pointer to pointer head
 *
 * @index: index to find
 *
 * Return: address of the node find
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	while (i <= index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}
