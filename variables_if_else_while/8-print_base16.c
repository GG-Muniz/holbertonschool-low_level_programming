#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program will print all numbers of base 16.
 * Return: 0
*/

int main(void)
{
	/*Declaring variable. */
	int n;
	/* Print all numbers of base 16 in lowercase followed by a new line.*/
	for (n = 0; n < 16; n++)
	{
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
