#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 1; c < 101; c++)
	{
		if (c % 15 == 0)
			printf("FizzBuzz");
		else if (c % 3 == 0)
			printf("Fizz");
		else if ((c % 5) == 0)
			printf("Buzz");
		else
			printf("%d", c);

		printf(" ");
	}
	printf("\n");
	return (0);
}