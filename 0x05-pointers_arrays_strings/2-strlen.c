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
