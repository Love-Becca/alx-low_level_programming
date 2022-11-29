#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node
 * @head: node begining
 * @index: index of the node
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && i != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
