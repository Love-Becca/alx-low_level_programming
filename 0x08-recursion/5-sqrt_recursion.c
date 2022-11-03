#include "main.h"

/**
 * _sqrt_recursion - return square root of a number
 * @n: parameter
 * @a: parameter
 * @m: parameter
 * Return: a function
 */
int square_function(int a, int m);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_fuction(n, 0));
}

/**
 * square_function - finds natural
 * @a: parameter
 * @m: parameter
 * Return: square root
 */

int square_function(int a, int m)
{
	if (m * m > a)
		return (-1);
	if (m * m == a)
		return (m);
	return (square_function(a, m + 1));
}
