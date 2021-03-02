#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates the array
 * @size: size of the array
 * @c: value of the array
 * Return: pointer to the array, or NULL if
 * it fails.
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
{
return (NULL);
}

p = malloc(sizeof(char) * size);
i = 0;

if (p == NULL)
{
return (NULL);
}

while (i < size)
{
p[i] = c;
i++;
}

p[i] = '\0';
return (p);
}
