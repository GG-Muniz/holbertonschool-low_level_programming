#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - will print a string in reverse.
 * @s: string that will be printed in reverse.
 *
*/
void print_rev(char *s)
{
	int l = 0, r;

	while (s[l] != '\0')
	{
		l++;
	}

	for (r = l - 1; r >= 0; r--)
	{
		putchar(s[r]);
	}
	putchar('\n');
}
