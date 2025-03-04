#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *cap_string - function capitalizes all words of a string.
 * @str: string to capitalize.
 * Return: the string capitalized
*/
char *cap_string(char *str)
{
	int j = 0;
	int i = 0;
	int cap = 1;
	char sep[] = " \t\n,;.!?(){}";

	while (str[i] != '\0')
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		cap = 0;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
