#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
*/
void more_numbers(void)
{
	int a, i;

	a = 0;
	while (a <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	a++;
	}
}
