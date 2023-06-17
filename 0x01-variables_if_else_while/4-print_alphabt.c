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
	char let = 'a';

	while (let <= 'z')
	{
		if (let != 'e' && let != 'q')
		{
			putchar(let);
		}
		let++;
	}
	putchar('\n');
	return (0);
}
