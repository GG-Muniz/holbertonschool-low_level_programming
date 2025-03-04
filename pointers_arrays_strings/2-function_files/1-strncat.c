#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function will concatenate 2 strings.
 * @dest: destination of the string that will get concatenated.
 * @src: source of the other string to concatenate.
 * @n: variable used to count the bytes from src.
 * Return: destination.
*/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	while (dest[length] != '\0')
		length++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
