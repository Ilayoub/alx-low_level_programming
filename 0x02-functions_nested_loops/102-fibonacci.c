#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 * it starts with 1 and 2
 * it is followed by a new line
 * Return: always 0
 */

int main(void)

{
	int count;

	unsigned long f1 = 0, f2 = 1, sum;

	for (count = 0; count < 50; count++)

	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
