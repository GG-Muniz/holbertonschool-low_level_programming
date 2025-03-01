#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - function will print a string in reverse
 * @s: string that will be print in reverse.
 *
*/
void rev_string(char *s)
{
	int l = 0, left, right;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}

	left = 0;
	right = l - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
