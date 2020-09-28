#include "holberton.h"
/**
 * _strlen - Get the length of a string
 * @s: Set of characters
 *
 * Return: String length (int)
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
 * puts_half - Print the half of a string
 * @str: Set of characters
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int start;

	if (len % 2 == 0)
		start = (len / 2);
	else
		start = ((len + 1) / 2);

	i = start;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
