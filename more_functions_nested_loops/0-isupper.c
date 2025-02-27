#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character.
 * @c: character uppercase or lowercase.
 * Return: 0 for lowercase and 1 for uppercase.
*/
int _isupper(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
