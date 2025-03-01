#include "main.h"
#include <string.h>
/**
 * _strcat - function will take 2 strings and concatenate them.
 * @dest: destination of the string to concatenate.
 * @src: source of the string that will be concatenated.
 * Return: destination.
*/
char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length] != '\0')
		length++;

	for (i = 0; src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);


}
