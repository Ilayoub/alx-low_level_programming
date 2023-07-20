#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - The function returns the sum of all its parameters
 * @n: The number of paramters
 * @...: A variable number of paramters that the sum of it must be calculated
 * Return: If n == 0 - 0.
 * Otherwise - The sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
