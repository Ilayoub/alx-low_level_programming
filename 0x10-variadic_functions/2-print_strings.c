#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - The function prints strings and followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 * Description: If separator is NULL, do not printed.
 *              If one of the strings if NULL, (nil) do print instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int ind;

	va_start(strings, n);

	for (ind = 0; ind < n; ind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
