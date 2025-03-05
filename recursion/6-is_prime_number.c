#include "main.h"

/**
 * check_prime - helper function to check if n is divisible by any number
 * @n: number to check
 * @i: divisor to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int check_prime(int n, int i)
{
	/* Base case: reached sqrt(n) without finding a divisor */
	if (i * i > n)
		return (1);

	/* Base case: found a divisor */
	if (n % i == 0)
		return (0);

	/* Check next divisor */
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	/* Base cases: n <= 1 is not prime */
	if (n <= 1)
		return (0);

	/* Use helper function starting with 2 as first possible divisor */
	return (check_prime(n, 2));
}
