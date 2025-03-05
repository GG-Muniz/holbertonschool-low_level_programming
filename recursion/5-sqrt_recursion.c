#include "main.h"

/**
 * check_sqrt - helper function to check if n has a natural square root
 * @n: number to check
 * @i: possible square root to check
 *
 * Return: natural square root if found, -1 if not found
 */
int check_sqrt(int n, int i)
{
	/* Base case: i^2 exceeds n (no natural square root) */
	if (i * i > n)
		return (-1);

	/* Base case: i^2 = n (found square root) */
	if (i * i == n)
		return (i);

	/* Check next possible square root */
	return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	/* Error case: negative number has no natural square root */
	if (n < 0)
		return (-1);

	/* Use helper function starting with 0 as possible square root */
	return (check_sqrt(n, 0));
}
