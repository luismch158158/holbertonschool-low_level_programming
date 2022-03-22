#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all data
 * of a linked list
 *
 * @head: pointer to head
 *
 * Return: sum of all data (n)
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *holder = head;
	size_t sum = 0;

	if (head == NULL)
		return (0);

	while (holder != NULL)
	{
		sum = sum + holder->n;
		holder = holder->next;
	}

	return (sum);
}
