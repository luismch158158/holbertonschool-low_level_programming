#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a
 * new node at a given position.
 *
 * @h: Pointer to pointer head
 *
 * @idx: index to add new node
 *
 * @n: number to add to new node
 *
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		while (i < (idx - 1) && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		temp2 = *h;
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = temp2;
		return (new_node);
	}
	else
	{
		new_node->prev = temp;
		temp2 = temp->next;
		temp->next = new_node;
		new_node->next = temp2;
	}
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
