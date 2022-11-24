#include "lists.h"

/**
 * list_len - number of element
 * @h: parameter
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		nnode++;
		h = h->next;
	}
	return (node);
}
