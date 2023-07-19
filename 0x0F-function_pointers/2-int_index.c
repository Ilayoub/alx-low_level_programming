#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the function searches for an integer
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: The pointer to function of one of the three in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
