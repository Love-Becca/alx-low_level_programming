#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: begining of node
 * @index: node index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *new;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index -1 && previous != NULL; i++)
			previous = previous->next;
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}
	new = previous->next;

	if (index != 0)
	{
		previous->next = new->next;
		free(new);
	}
	else
	{
		free(previous);
		*head = new;
	}

	return (1);
}
