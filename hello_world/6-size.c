#include <stdio.h>
/**
 * Main will print the size of various types.
 *
 * Return: 0
*/
int main(void)
{
	char cT;
	int iT;
	long int lT;
	long long int llT;
	float fT;

	printf("Size of char: %zu byte(s)\n", sizeof(cT));
	printf("Siize of int: %zu byte(s)\n", sizeof(iT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lT));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llT));
	printf("Size of a float: %zu byte(s)\n", sizeof(fT));

	return (0);
}
