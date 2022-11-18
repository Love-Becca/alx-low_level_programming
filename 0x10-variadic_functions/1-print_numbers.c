#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: parameter
 * @separator: seperator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, n));

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");


	va_end(num);
}
