#include "main.h"
/**
 * print_last_digit - print last digit in a number.
 * @ld: is a number.
 * Return: the number.
*/
int print_last_digit(int ld)
{
	ld = ld % 10;
	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
