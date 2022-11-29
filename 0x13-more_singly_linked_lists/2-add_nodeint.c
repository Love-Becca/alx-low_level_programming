#include "lists.h"

/**
 * add_nodeint - add to the begining of the node
 * @head: node head
 * @n: parameter
 * Return: added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));

	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = *head;
	*head = start;

	return (start);
}
