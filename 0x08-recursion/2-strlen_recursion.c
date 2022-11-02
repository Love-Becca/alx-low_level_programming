#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: parameter
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
