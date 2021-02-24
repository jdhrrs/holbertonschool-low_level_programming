#include "holberton.h"

/**
 * _strlen_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
