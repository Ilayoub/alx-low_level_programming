#include <stdio.h>
#include "main.h"

/**
 * main - prints 10 times of the numbers from 0 to 14
 * must be followed by a new line
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
