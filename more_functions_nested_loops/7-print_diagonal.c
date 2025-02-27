#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 *
*/
void print_diagonal(int n)
{
	int d, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (d = 0; d < n; d++)
	{
		for (i = 0; i < d; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
