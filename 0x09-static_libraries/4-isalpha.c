#include "main.h"

/**
 * _isalpha - the function checks for alphabetic character
 * @c: the character that must  be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
