#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function checks for a gigit 0 through 9
 * @c: is the digit.
 * Return: 1 if it is a digit 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
