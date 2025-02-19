#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabet in lowercase using putchar.
 * Return: 0
*/

int main(void)
{
	/* Declare variable.*/
	char a;
	
	/* For Loop starts at a and finishes alphabet at z. Prints outcome.*/
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
