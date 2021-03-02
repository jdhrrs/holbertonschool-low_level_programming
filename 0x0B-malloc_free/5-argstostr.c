#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: new string or NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, size, k;
char *s;

if (ac == 0 || av == NULL)
{
return (NULL);
}

k = 0;
size = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
k++;
}
}
size = ac + k;

s = (char *)malloc(sizeof(char) * (size + 1));
if (s == NULL)
{
return (NULL);
}

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
s[k] = av[i][j];
s[k + 1] = '\0';
}
s[k++] = '\n';
}
return (s);
}
