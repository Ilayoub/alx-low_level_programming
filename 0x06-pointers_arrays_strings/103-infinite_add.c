#include "main.h"

/**
 * infinite_add - the function adds two numbers
 * @n1: represents the 1st number to add
 * @n2: represents the 2nd number to add
 * @r: pointer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int i = 0, j = 0, c = 0, a, b, sum, big;
	
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		big = i;
	else
		big = j;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';
	
	while (big >= 0)
	{
		a = (n1[i - 1] - '0');
		b = (n1[j - 1] - '0');
		if (i > 0 && j > 0)
			sum = a + b + c;
		else if (i < 0 && j > 0)
			sum = b + c;
		else if (i > 0 && j < 0)
			sum = a + c;
		else
			sum = c;
		
		if (sum > 9)
		{
			c = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			c = 0;
			sum = sum + '0';
		}
		r[big] = sum;
		i--;
		j--;
		big--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
