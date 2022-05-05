#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 *
 * @h: pointer to Head of the list
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
