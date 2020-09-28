#include "holberton.h"

/**
 * swap_int - Swap the value of two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
