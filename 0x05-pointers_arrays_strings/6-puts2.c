#include "holberton.h"
/**
 * puts2 - Swap the value of two integers
 * @str: Set of characters
 *
 * Return: Nothing
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
