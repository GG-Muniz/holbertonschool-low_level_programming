#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing acceptable characters
 *
 * Return: number of bytes in initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
			return (count);

		count++;
		s++;
	}

	return (count);
}
