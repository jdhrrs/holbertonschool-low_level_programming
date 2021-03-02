#include "holberton.h"

/**
 * alloc_grid - create a gid of numbers
 * @width: the width of grid
 * @height: the height f the grid
 *
 * Return: A pointer to the grid.
 */
int **alloc_grid(int width, int height)
{
int i, j, **h;

if (width <= 0 || height <= 0)
return (NULL);

h = (int **) malloc(height * sizeof(long));
if (h == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
*(h + i) = malloc(width * sizeof(int));
if (*(h + i) == NULL)
{
int k;

for (k = i; k >= 0; k--)
free(*(h + k));
free(h);
return (NULL);
}
for (j = 0; j < width; j++)
h[i][j] = 0;
}
return (h);
}
