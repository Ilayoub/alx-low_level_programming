#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - the function that prints a string in reverse
 * @s: The string that must be printed
 */

void _print_rev_recursion(char *s)

{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
