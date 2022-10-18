#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that print to 98
 * @n: parameter that takes a value
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
