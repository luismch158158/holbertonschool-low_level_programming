#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index
 *
 * @head: Pointer to pointer head
 *
 * @index: index to find
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		/*Si hay mas elementos*/
		if (temp->next != NULL)
			temp->next->prev = NULL;

		/*Si hay un solo element*/
		free(temp);
		return (1);
	}
	while (i < index)
	{
		/*Si index es mas que la longitud de la lista*/
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	/*Si el node a borrar no es el ultimo*/
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
