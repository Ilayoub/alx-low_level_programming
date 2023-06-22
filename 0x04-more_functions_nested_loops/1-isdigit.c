#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks numbers from 0 to 9
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
