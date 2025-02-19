#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabet in lowercase EXCEPT q & e.
 * Return: 0
*/

int main(void)
{
	/* Declare variable.*/
	char a;
	/* For Loop - lowercase alphabet except q & e.*/
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
