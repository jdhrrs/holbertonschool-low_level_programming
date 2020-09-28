#include "holberton.h"
/**
 * _strlen - Swap the value of two integers
 * @s: Set of characters
 *
 * Return: Nothing
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - Print a string in reverse
 * @s: Set of characters
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	i = len;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
