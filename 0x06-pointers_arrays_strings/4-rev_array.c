#include "main.h"
#include <stdio.h>

/**
 * reverse_array - the function reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int m;
	int l;

	for (m = 0; m < n--; m++)
	{
		l = a[m];
		a[m] = a[n];
		a[n] = l;
	}
}
