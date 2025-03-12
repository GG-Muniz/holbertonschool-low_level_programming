#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmeb: array.
 * @size: elements of the array.
 *
 * Return: NULL if nmeb or size = 0 also NULL if it fails.
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;
	char *temp;

	if (nmeb == 0 || size == 0)
		return (NULL);

	total_size = nmeb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	temp = ptr;
	for (i = 0; i < total_size; i++)
		temp[i] = 0;

	return (ptr);
}

