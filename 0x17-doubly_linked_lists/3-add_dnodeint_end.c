#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a list
 *
 * @head: pointer to Head of the list
 * @n: number to add in node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = tp;
		return (new_node);
	}

	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = new_node;
	new_node->prev = tp;

	return (new_node);
}
