#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print n elements from an integer array
 * @a: Pointer to the integer array
 * @n: Number of elements to extract
 *
 * Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", *(a + i));
		else
			printf(", %d", *(a + i));
	}
	printf("\n");
}
