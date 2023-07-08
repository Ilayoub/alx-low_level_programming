#include "main.h"
#include <stdio.h>

/**
 * main - the function prints the name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
