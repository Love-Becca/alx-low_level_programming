#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	return (0);
}
