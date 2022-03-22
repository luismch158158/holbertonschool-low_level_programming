#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t
 *
 * @head: pointer to head
 *
 * Return: the head node's data (n)
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *holder;
	int integer;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	integer = (*head)->n;
	holder = (*head)->next;

	free(*head);
	*head = holder;

	return (integer);
}
