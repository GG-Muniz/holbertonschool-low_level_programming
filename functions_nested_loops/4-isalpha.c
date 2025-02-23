#include "main.h"
/**
 * _isalpha - prints 1 or 0 depending if char is a letter or not.
 * @c: it's the defined char. 
 * Return: 1 if c is a letter & 0 if not.
*/

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
