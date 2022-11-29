#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees list
 * @head: parameter
 */

void free_listint(listint_t *head)
{
	listint_t *freed;

	while ((freed = head) !=  NULL)
	{
		head = head->next;
		free(freed);
	}
}
