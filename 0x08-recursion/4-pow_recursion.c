#include "main.h"

/**
 * _pow_recursion - power of
 * @x:parameter
 * @y:parameter
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
