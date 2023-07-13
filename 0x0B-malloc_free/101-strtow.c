#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: the string to count
 * Return: the number of words
 */
int wrdcnt(char *s)
{
	int a, n = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a] == ' ' && s[a + 1] != '\0')
				n++;
		}
		else if (a == 0)
			n++;
	}
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: the pointer to the array of strings
 */
char **strtow(char *str)
{
	int a, b, c, d, n = 0, xy = 0;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	x = malloc((n + 1) * sizeof(char *));
	if (x == NULL)
		return (NULL);
	x[n] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			x[xy] = malloc(b * sizeof(char));
			if (x[xy] == NULL)
			{
				for (c = 0; c < xy; c++)
					free(x[c]);
				free(x);
				return (NULL);
			}
			for (d = 0; d < b - 1; d++)
				x[xy][d] = str[a + d];
			x[xy][d] = '\0';
			xy++;
			a += b;
		}
		else
			a++;
	}
	return (x);
}
