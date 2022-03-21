#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a linked listint_t list
 *
 * @h: pointer to header
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);

}
