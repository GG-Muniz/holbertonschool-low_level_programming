#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}
