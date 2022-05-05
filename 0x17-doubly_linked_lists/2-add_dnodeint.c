#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 *
 * @head: pointer to Head of the list
 * @n: number to add of node
 *
 * Return: adress of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = *head;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;

	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
