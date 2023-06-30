#include <stdio.h>
#include "main.h"

/**
 * print_buffer - the function prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int l, k, m;

	l = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		k = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (m = 0; m < 10; m++)
		{
			if (m < k)
				printf("%02x", *(b + l + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < k; m++)
		{
			int c = *(b + l + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		l += 10;
	}
}
