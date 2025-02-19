#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabet in lowercase & uppercase.
 * Return: 0
*/

int main(void)
{
	/* Declare variable.*/
	char a;
	char b;
	/* For Loop - lowercase alphabet.*/
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	/* For loop - uppercase alphabet.*/
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
