#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: pointer to Head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
