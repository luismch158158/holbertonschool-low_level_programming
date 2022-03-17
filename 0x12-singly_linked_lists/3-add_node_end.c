#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end
 * of a list_t list
 *
 * @head: pointer to pointer head
 *
 * @str: string to fill new node
 *
 * Return: address of the new element, or NULL if it failed.
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
