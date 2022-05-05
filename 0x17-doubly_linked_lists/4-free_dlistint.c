#include "lists.h"

/**
 * free_dlistint - Function that frees a list
 *
 * @head: Pointer to pointer head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder = head;

	while (head != NULL)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
