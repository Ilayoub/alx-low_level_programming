#include "main.h"

/**
 * _isupper - creates uppercase letters
 * @c: character to be  check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
