#include "main.h"
#include <stdio.h>

/**
 * main - the function prints the number of arguments passed into it
 * It must be followed by a new line
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
