#include "lists.h"

/**
 * print_listint - Function that prints all the elements
 * of a listint_t list
 *
 * @h: head pointer
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
