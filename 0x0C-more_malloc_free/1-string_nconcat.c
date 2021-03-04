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
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of second string to concat
 * Return: concat string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, l, m;
char *s3;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

l = _strlen(s1);
m = _strlen(s2);

if (n >= m)
s3 = malloc(sizeof(char) * (l + m + 1));
else
s3 = malloc(sizeof(char) * (l + n + 1));

if (s3 == NULL)
return (NULL);

k = 0;
j = 0;
for (i = 0; i < l; i++, k++)
s3[k] = s1[i];

if (n >= m)
{
for (; k < (l + m); j++, k++)
s3[k] = s2[j];
}
else
{
for (; k < (l + n); k++, j++)
s3[k] = s2[j];
}
s3[k] = '\0';
return (s3);
}
