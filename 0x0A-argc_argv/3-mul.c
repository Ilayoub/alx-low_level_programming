#include "main.h"
#include <stdio.h>

/**
 * main - the function multiplies two numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0;
 */

int main(int argc, char *argv[])

{
	int i, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
