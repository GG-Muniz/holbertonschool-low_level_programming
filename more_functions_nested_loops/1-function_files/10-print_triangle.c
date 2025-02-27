#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function prints triangle.
 * @size: size of the triangle.
*/
void print_triangle(int size)
{
	int r, c, s;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (r = 1; r <= size; r++)
	{
		for (s = size - r; s > 0; s--)
		{
			_putchar(' ');
		}
		for (c = 0; c < r; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
