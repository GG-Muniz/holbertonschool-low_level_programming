#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase followed by new line.
*/

void print_alphabet(void)
{
	/* Declare variable.*/
	int a;
	/* Loop alphabet until printed in lowercase.*/
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
