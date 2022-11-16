 #include "3-calc.h"

/**
 * main- entry point
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arga, argb, int save;
	char i;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arga = atoi(argv[1]);
	argb = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	i = *argv[2];

	if ((i == "/" || i == "%") && argb == 0)
	{
		print("Error\n");
		exit(100);
	}

	save = func(ara, argb);

	printf("%d\n", save);

	return (0);
}
