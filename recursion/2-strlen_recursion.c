#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
		return (0);

	/* Return 1 + length of rest of string */
	return (1 + _strlen_recursion(s + 1));
}
