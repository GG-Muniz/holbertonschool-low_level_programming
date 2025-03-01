#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * puts2 - prints every other character of a string.
 * @str: characters to be printed.
 *
*/
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
