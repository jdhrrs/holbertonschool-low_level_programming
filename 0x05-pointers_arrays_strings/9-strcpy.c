#include "holberton.h"
/**
 * _strcpy - Copy a string
 * @dest: Pointer to the string array for copying
 * @src: Number of elements to extract
 *
 * Return: Nothing
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
