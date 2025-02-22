#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times in lower case.
*/
void print_alphabet_x10(void)
{
	/* Declare variable */
	int a, b;
	/* Print alphabet x10 in lowercase */
	b = 0;
	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		b++;
	}
}
