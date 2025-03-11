#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: streng two.
 * Return: NULL if failed.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int len1 = 0, len2 = 0, i, j;

	/*First: tread the variables as NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Second: calculate the length of each string.*/
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/*Third: allocate the memory.*/
	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	/*Fourth: copy the strings to one index i. */
	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	for (j = 0; j < len2; j++)
		conc[i] = s2[j];

	/*Fifth: add the '\0' null terminator to match end of string.*/
	conc[i] = '\0';

	/*Sixth: return the concatenated string.*/
	return (conc);
}
