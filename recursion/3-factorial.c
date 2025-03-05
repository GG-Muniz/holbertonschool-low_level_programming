#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to calculate factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* Error case: n is negative */
	if (n < 0)
		return (-1);

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* Return n * factorial of (n-1) */
	return (n * factorial(n - 1));
}
