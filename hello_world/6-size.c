#include <stdio.h>
/**
 * Main will print the size of various types.
 *
 * Return: 0
 */
int main (void)
{
	char cT;
	int iT;
	long int lT;
	long long int llT;
	float fT;

	printf("\"Size of char: %zu byte(s)", sizeof(cT));
	printf("\"Size of int: %zu byte(s)", sizeof(iT));
	printf("\"Size of a long int: %zu byte(s)", sizeof(lT));
	printf("\"Size of a long long int: %zu byte(s)", sizeof(llT));
	printf("\"Size of a float: %zu byte(s)", sizeof(fT));

	return (0);
}
