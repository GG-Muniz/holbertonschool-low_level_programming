#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - prints the length of a string.
 * @s: string used to print the length of.
 * Return: returns the length of the string.
*/
int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}
