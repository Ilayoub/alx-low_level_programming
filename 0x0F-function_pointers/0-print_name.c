#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - the function prints a name
 * @name: the string that must be added
 * @f: the pointer to function
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
