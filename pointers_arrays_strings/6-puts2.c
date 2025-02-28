#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * puts2 - prints every other character of a string, starting with the first character.
 * @str - string to be pirnted.
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
