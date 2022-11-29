#include "lists.h"

/**
 * ree_listint2 - free a list
 * @head: node begining
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *freed;
	listint_t *save;

	if (head != NULL)
	{
		save = *head;
		while ((freed = save) != NULL)
		{
			save = save-> next;
			free(freed);
		}
		*head = NULL;
	}
}
