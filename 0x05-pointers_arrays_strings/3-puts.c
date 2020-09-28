#include "holberton.h"
/**
 * _puts - Print a string
 * @str: Set of characters
 *
 * Return: Nothing
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
