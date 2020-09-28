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
 * rev_string - Reverse a string
 * @s: Set of characters
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = _strlen(s);
	int i = len;
	char s_rev[1000];
	int j = 0;
	int k;

	while (i > 0)
	{
		i--;
		s_rev[j] = *(s + i);
		j++;
	}

	for (k = 0; k < len; k++)
	{
		*(s + k) = s_rev[k];
	}
}
