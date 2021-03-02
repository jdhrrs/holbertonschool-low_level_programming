#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free height of 2d string
 * @grid: array that is going to be free.
 * @height: height of the matrix
 * Return: void
 */
void free_grid(int **grid, int height)
{
  int i;

  for (i = 0; i < height; i++)
    {
      free(grid[i]);
    }
  free(grid);
}
