#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 *
 * @head: pointer to head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}

	*head = NULL;

}
