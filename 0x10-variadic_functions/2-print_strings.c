#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: parameter
 * @n: parametr
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *save;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		save = va_arg(strings, char *);
		if (save)
		{
			printf("%s", save);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);

		}
	}
	printf("\n");
	va_end(strings);
}

