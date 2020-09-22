#include "holberton.h"

/**
 * _abs - returns absolute value of n
 * @n: integer to test
 * Return: returns n if positive, 0 if zero, -n if negative
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}
