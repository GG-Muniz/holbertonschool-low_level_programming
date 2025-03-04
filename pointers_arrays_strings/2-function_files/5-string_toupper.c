#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer to each character to change.
 * Return: returns the string in capital letters.
*/
char *string_toupper(char *str)
{
	char *upper = str;

	while (*upper)
	{
		if (*upper >= 'a' && *upper <= 'z')
		{
			*upper = *upper - ('a' - 'A');
		}
		upper++;
	}
	return (str);
}
