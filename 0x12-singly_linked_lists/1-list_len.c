#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list
 *
 * @h: Pointer to Head of List
 *
 * Return: number of elements
 *
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}


