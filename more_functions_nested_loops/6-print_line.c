#include "main.h"
#include <stdio.h>
/**
 * print_line - function draws a straight line in the terminal.
 * @n: n is the number if times the character '_' should be printed.
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
