#include "holberton.h"

/**
 * _isalpha - returns 1 if c is a letter, lowercase
 * or uppercase, returns 0 otherwise
 * @c: integer to be tested
 * Return: 1 for alpha, 0 for nonalpha
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
