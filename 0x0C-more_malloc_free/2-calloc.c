#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_memset - the function fills the memory with a constant byte
 * @s: the memory area that must be filled
 * @b: the character that must be copied
 * @n: the number of times to copy b
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - the function that allocates memory for an array using malloc
 * @nmemb: the elements's number of the array
 * @size: the size of the elements
 * Return: the pointer that must be allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
