#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - funtion will compare two strings.
 * @s1: string one to compare.
 * @s2: string two to compare.
 * Return: result.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
