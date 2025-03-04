#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	/* Special case for empty needle */
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		/* Check if the substring matches starting at current position */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		/* If we reached the end of needle, we found a match */
		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
