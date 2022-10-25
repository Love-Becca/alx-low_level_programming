#include "main.h"

/**
 * _puts - function that prints string
 * @str - parameter
 * Return:0
 */

void _put(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
