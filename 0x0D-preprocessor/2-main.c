#include <stdio.h>

/**
 * main - the function prints the name of the file it was compiled from
 * It must be followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
