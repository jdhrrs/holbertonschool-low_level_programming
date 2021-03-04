#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: array of integers or NULL
 */
int *array_range(int min, int max)
{
int i;
int *c;

if (min > max)
return (NULL);

c = malloc(sizeof(int) * (max - min + 1));
if (c == NULL)
return (NULL);

for (i = 0; min <= max; i++)
c[i] = min++;

return (c);
}
