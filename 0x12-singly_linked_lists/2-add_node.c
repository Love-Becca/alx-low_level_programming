#include "lists.h"
#include <string.h>

/**
 * add_node - add new nodes
 * @head: node start
 * @str: string
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int i;
	list_t *new_node;

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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
