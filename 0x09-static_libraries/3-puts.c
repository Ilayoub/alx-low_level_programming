#include "main.h"

/**
 * _puts - the function prints a string
 * It must be followed by a new line
 * to stdout
 * @str: string that must be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
