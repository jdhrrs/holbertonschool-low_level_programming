#include "holberton.h"

/**
 * main - Return the largest prime factor for 612852475143 .
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
