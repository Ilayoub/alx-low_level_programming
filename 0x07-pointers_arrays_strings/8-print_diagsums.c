#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: always 0 (Success)
 */

void print_diagsums(int *a, int size)

{
	int s1, s2, b;

	s1 = 0;
	s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 = s1 + a[b * size + b];
	}

	for (b = size - 1; b >= 0; b--)
	{
		s2 += a[b * size + (size - b - 1)];
	}

	printf("%d, %d\n", s1, s2);
}
