#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* Silence unused parameter warning */
	(void)argv;

	/* Print number of arguments (excluding program name) */
	printf("%d\n", argc - 1);

	return (0);
}
