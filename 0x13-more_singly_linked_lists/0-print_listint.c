#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: parameter
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
