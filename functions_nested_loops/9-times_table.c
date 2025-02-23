#include "main.h"
/**
 * times_table - Prints the 9 times table starting from 0
*/
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			if (col > 0)
				_putchar(','), _putchar(' ');

			/* Handle single-digit alignment. */
			if (product < 10 && col > 0)
				_putchar(' ');

			/* Print the product as individual characters. */
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
