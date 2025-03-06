#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* Silence unused parameter warning */
	(void)argc;

	/* Print program name */
	printf("%s\n", argv[0]);

	return (0);
}
