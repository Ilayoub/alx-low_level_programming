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
	int let;

	for (let = 'a'; let <= 'z'; let++)
		putchar(let);
	for (let = 'A'; let <= 'Z'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
