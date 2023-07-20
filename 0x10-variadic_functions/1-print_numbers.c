#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - The function that prints numbers and followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers that must be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int IND;

	va_start(nums, n);

	for (IND = 0; IND < n; IND++)
	{
		printf("%d", va_arg(nums, int));

		if (IND != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
