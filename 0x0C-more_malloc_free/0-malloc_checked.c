#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: space in memory
 * Return: 98 or space in memory
 */
void *malloc_checked(unsigned int b)
{
void *c;

c = malloc(b);
if (c == NULL)
{
exit(98);
}
return (c);
}
