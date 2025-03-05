#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
		return;

	/* Recursive call first (move to end of string) */
	_print_rev_recursion(s + 1);

	/* Print current character after recursion (in reverse) */
	_putchar(*s);
}
