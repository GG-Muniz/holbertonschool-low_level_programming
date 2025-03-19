#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	/* Check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	/* Check if operation is valid */
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	/* Check for division/modulo by zero */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
