#include "holberton.h"

/**
 * print_diagonal - Print diagonal lines.
 * @n: Number of lines
 *
 * Return: There is no return value
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
