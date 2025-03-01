#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * puts_half - prints half of a string
 * @str: string that will be used to print.
 *
*/
void puts_half(char *str)
{
	int l = 0;
	int start, i;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		start = l / 2;
	}
	else
	{
		start = (l + 1) / 2;
	}

	for (i = start; i < l; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
