#include "lists.h"

/**
 * sum_dlistint - Function that sum all the data(n) of a list
 *
 * @head: Pointer to pointer head
 *
 * Return: 0 if the list is empty or sum of all data(n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
