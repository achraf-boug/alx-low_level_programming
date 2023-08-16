#include "calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = argv[3];

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error");
		exit(100);
	}

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
