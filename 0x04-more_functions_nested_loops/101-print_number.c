#include <stdio.h>
#include <math.h>

/**
 * main - prints an integer
 * @n : is a variable
 * Return: always 0 (Success)
 */

void print_number(int n)

{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	} else
	{
		m = n;
	}

	if (m / 10)
	{
		print_number(m / 10);
	}

	_putchar(m % 10 + '0');
}
