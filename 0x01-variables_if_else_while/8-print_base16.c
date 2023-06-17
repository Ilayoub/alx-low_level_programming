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
	int n;
	char let;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
