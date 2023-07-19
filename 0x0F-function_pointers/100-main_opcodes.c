#include <stdlib.h>
#include <stdio.h>

/**
 * main - The function prints the opcodes of its own main function
 * @argc: The number of the arguments
 * @argv: The array of the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int B, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	B = atoi(argv[1]);

	if (B < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < B; a++)
	{
		if (a == B - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
