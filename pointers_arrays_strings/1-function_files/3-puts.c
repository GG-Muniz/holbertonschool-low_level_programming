#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - prints a string followed by a new line.
 * @str: reference to the string to print.
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
