#include "main.h"
#include <stdio.h>

/**
 * main - the function prints all arguments it receives
 * It must be followed by a new line
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
