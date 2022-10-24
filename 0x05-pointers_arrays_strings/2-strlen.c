#include "main.h"

/**
 * _strlen - function that returns the lent of a string
 * @s: parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] > '\0'; i++);

	return (i);
}
