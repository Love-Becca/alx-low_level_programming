#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * check_string - check string
 * @c: parameter
 * Return: 0
 */

int check_string(char *c)
{
	unsigned int i;

	i = 0;

	while (i < strlen(c))
	{
		if (!isdigit(c[i]))
			return (0);
		i++;
	}
	return (1);
}


/**
 * main - entry point
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int string_convert;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_string(argv[count]))
		{
			string_convert = atoi(argv[count]);
			sum += string_convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
