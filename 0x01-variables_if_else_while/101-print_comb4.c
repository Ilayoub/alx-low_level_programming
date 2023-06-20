#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int Num1, Num2, Num3;

	for (Num1 = 0; Num1 < 8; Num1++)
	{
		for (Num2 = Num1 + 1; Num2 < 9; Num2++)
		{
			for (Num3 = Num2 + 1; Num3 < 10; Num3++)
			{
				putchar((Num1 % 10) + '0');
				putchar((Num2 % 10) + '0');
				putchar((Num3 % 10) + '0');

				if (Num1 == 7 && Num2 == 8 && Num3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
