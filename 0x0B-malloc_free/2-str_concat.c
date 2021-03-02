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
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: two strins or Null
 */
char *str_concat(char *s1, char *s2)
{
  char *s3;
  int i, j, k;

  if (s1 == NULL)
    {
      s1 = "";
    }
  if (s2 == NULL)
    {
      s2 = "";
    }
  s3 = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
  if (s3 == NULL)
    {
      return (NULL);
}
k = 0;
for (i = 0; s1[i] != '\0'; i++)
{
s3[k] = s1[i];
k++;
}

for (j = 0; s2[j] != '\0'; j++)
{
s3[k] = s2[j];
k++;
}

s3[k] = '\0';
return (s3);
}
