#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function will copy a string.
 * @dest: destination where the string will be copied to.
 * @src: source where the string will get copied from.
 * @n: measurer - maximum to copy - making sure there is no overflow.
 * Return: destination.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
