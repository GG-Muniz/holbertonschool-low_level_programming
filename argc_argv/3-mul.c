#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the program received the correct number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert string arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Calculate the product */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
