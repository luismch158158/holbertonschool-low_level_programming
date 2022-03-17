#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 *
 * @head: pointer to head
 *
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head != NULL)
	{
		holder = head->next;
		free(head->str);
		free(head);
		head = holder;
	}
}
