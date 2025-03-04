#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - function that reverses the content of an array.
 * @a: pointer to the array.
 * @n: number of elements of the array.
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
