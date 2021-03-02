#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: Pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != 0; i++)
{
}

return (i);
}

/**
 * _strdup - copies a given string
 * @str: string
 * Return: new string or NULL if its empty
 */
char *_strdup(char *str)
{
char *s;
int i;

if (str == NULL)
{
return (NULL);
}

s = malloc(sizeof(char) * _strlen(str) + 1);
i = 0;
if (s == NULL)
{
return (NULL);
}
while (i < _strlen(str))
{
s[i] = str[i];
i++;
}
s[i] = '\0';
return (s);
}

