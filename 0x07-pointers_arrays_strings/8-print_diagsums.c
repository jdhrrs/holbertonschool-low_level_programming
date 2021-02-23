#include "holberton.h"

/**
 * print_diagsums - print the sum of the two diagonals
 * @a: the int matrix
 * @size: the string to find
 *
 * Return: The quantity of bytes contents
 */
void print_diagsums(int *a, int size)
{
  int i, j, d1 = 0, d2 = 0;

  for (i = 0, j = (size - 1); i < size; i++, j--)
    {
      d1 += *(a + (i * size) + i);
      d2 += *(a + (i * size) + j);
    }
  printf("%d, %d\n", d1, d2);
}
