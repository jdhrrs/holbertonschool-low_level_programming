#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the sum of all numbers under 1024
 * that are divisible by 3 or 5
 * Return: 0
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
	return (0);
}
