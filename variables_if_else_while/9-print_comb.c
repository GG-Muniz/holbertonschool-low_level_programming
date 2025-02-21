#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all combinations of single-digit numbers.
 * Return: 0
*/

int main(void)
{
	/* Declare variable. */
	int i;
	/* For loop printing all possible combinations. */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
