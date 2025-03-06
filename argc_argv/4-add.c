#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* If no arguments, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Process each argument (skipping program name) */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument contains only digits */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Add the number to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
