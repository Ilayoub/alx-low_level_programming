#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - prints an integer
 * @n : is the integer to be printed
 */

void print_number(int n)
{
	unsigned int m = n;
	/*check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	/*print the first few digits*/
	if ((m / 10) > 0)

		print_number(m / 10);

	/*print the last digit*/
		_putchar(m % 10 + '0');
}
