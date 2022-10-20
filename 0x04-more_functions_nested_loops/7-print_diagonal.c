#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int c, d;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < c; d++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
