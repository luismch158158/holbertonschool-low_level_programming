#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 *
 * @head: pointer to head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
