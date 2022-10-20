#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
