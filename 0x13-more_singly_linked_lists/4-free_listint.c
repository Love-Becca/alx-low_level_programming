#include "lists.h"

/**
 * free_listint - function that frees list
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *freed;

	while ((free = head) !=  NULL)
	{
		head = head->next;
		free(freed);
	}
}
