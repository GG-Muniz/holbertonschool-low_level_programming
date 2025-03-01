#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - encodes a string to 1337.
 * @str: string that will be encoded.
 * Return: the encoded string.
*/
char *leet(char *str)
{
	char leet_chars[] = "43071";
	char normal_chars[] = "aeotl";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == normal_chars[j] || str[i] == normal_chars[j] - 32)
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}
	return (str);
}
