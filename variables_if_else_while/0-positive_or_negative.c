#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - identify if the random number is positive, negative or zero.
 * Return: 0
*/
int main(void)
{

	/*Decalring vairable n to be generated randomly */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Checks if the n is negative & prints result in a new line.*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	/*Checks if the n is zero & prints result in a new line.*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/*Checks if the n is positive & prints result in a new line.*/
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
