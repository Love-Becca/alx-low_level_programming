#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: node begining
 * @n: node value
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start;
	listint_t *last;

	start = malloc(sizeof(listint_t));

	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = NULL;

	if (*head == NULL)
		*head = start;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = start;
	}
	return (*head);
}
