#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function creates and array of integers.
 * @min: range.
 * @max: range.
 *
 * Return: the ptr to newly created array.
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i, value;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array  = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0, value = min; value <= max; i++, value++)
		array[i] = value;

	return (array);

}
