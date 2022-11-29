#include "lists.h"

/**
 * listint_len - number of elements
 * @h: parameter
 * Return: number
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}

	return (i);
}
