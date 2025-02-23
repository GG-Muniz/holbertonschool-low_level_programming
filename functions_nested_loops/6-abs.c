#include "main.h"
#include <stdio.h>
/**
 * _abs - it will compute the absolute value of an integer.
 * @a: is a number.
 * Return: 0.
*/
int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
		return (a);
	}
	else if (a > 0)
		return (a);
	return (0);
}
