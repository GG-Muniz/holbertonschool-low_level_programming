#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number ti variable n each time executed, then print.
 * Return: 0
*/

int main(void)
{
	/* Declaration of variables.*/
	int n;
	int b;

	/* Randomizer attributed to n.*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	/*Check if last digits are greater than 5.*/
	if (b > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, b);
	}
	/*Check if last digits are equal to 0.*/
	else if (b == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, b);
	}
	/*Check if last digits are less than 6 and not 0.*/
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, b);
	}
	return (0);
}
