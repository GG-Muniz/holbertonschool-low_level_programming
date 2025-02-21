#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all digit numbers of base 10 starting from 0.
 * Return: 0
*/

int main(void)
{
	/* Declaring variable. */
	int i;
	/* Using putchar to print all single digits of base 10 starting from 0.*/
	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
