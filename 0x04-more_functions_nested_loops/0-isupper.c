#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter that takes in a value
 * Return: 0
 */

int _isupper(int c)
{
	c = 'A';

	if (c > 'A'  &&  c < 'Z')
		return (1);
	else
		return (0);

	return (0);
}