#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - the function returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given
 * as a parameter
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)

{
	char *aaa;
	int b, r = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	aaa = malloc(sizeof(char) * (b + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
