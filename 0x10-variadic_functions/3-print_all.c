#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: print format
 */

void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j, d = 0;
	char *string;
	const char save[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (save[j])
		{
			if (format[i] == save[j] && d)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int)), d = 1;
				break;
			case 'i':
				printf("%d", va_arg(all, int)), d = 1;
				break;
			case 'f':
				printf("%f", va_arg(all, double)), d = 1;
				break;
			case 's':
				string = va_arg(all, char *), d = 1;
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	}
	printf("\n"), va_end(all);
}
