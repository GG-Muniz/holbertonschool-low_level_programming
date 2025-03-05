#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* Error case: y is negative */
	if (y < 0)
		return (-1);

	/* Base case: x^0 = 1 */
	if (y == 0)
		return (1);

	/* Return x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
