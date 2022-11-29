#include "lists.h"

/**
 * pop_listint - deletes head nodes
 * @head: head node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int list;
	listint_t *linked;
	listint_t *save;

	if (*head == NULL)
	{
		return (0);
	}

	linked = *head;

	list = linked->n;

	save = linked->next;

	free(linked);

	*head = save;

	return (list);
}
