#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square followed by a new line.
 * @size: is the size of the square.
 *
*/
void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (r = 0; r <= size; r++)
	{
		for (c = 0; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
