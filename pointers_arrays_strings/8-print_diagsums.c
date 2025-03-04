#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0; /* primary diagonal */
	int sum2 = 0; /* secondary diagonal */

	for (i = 0; i < size; i++)
	{
		/* Primary diagonal: elements with indices [i][i] */
		sum1 += a[i * size + i];

		/* Secondary diagonal: elements with indices [i][size-i-1] */
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
