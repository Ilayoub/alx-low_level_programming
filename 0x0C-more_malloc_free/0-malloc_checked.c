#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * *malloc_checked - the function allocates memory using malloc
 * @b: the number of bytes to be allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
