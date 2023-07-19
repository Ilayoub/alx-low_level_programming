#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the function executes a function given
 * as a parameter on each element of an array
 * @array: An array
 * @size: The size of the array
 * @action:The pointer to the function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
