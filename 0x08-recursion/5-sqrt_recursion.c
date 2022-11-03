#include "main.h"

/**
 * square_func - return square root of a number
 * @a: parameter
 * @m: parameter
 * Return: a function
 */

int square_func(int a, int m)
{
	if (m * m > a)
		return (-1);
	if (m * m == a)
		return (m);
	return (square_func(a, m + 1));
}

/**
 * _sqrt_recursion - returns recursion
 * @n: parameter
 * Return: root
 */
int _sqrt_recursion(int n)
{
	return (square_func(n, 0));
}
