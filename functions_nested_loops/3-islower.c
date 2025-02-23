#include "main.h"
/**
 *_islower - check if char is lowercase.
 *@c: it's the defined char.
 *Return: 1 if a lowercase letter or 0 if not.
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
