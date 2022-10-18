#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @c:takes  a prameter
 * Return: always 0
 */

int print_last_digit(int c)
{
	int num;

	num = c % 10;

	if (num < 0)
		num *= -1;

	_putchar(num + '0');

	return (0);
}
