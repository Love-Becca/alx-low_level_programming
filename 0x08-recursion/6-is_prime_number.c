#include "main.h"

/**
 * prime_num - recursion
 * @b: parameter
 * @m: parameter
 * Return: 1 or 0
 */

int prime_num(int b, int m)
{
	if (m == b - 1)
		return (1);
	else if (b % m == 0)
		return (0);
	if (b % m != 0)
		return (prime_num(b, m + 1));
	return (0);
}

/**
 * is_prime_number - returns prime
 * @n: parameter
 * Return: prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime_num(n, i));
}
