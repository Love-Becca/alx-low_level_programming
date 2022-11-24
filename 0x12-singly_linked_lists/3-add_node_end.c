#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the end
 * @head: parameter
 * @str: string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int i;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
