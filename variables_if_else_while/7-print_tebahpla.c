#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program will print alphabet in reverse.
 * Return: 0
*/

int main(void)
{
	/* Declaring variable.*/
	char a;
	/* For loop - writing the alphabet backwards in lowercase. */
	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}

