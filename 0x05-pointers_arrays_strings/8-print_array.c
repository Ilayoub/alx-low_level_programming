#include "main.h"

/**
 * print_array - the function prints n elements of an array
 * It must be followed by a new line
 * @a: array s name
 * @n: The number of array elements tha must be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
