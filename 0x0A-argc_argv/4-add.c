#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Function
 * @argc: argument count
 * @argv: argument vector
 * Return: sum or 1(Error)
 */
int main(int argc, char *argv[])
{
int i, sum, j;

sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != 0; j++)
{
if (!isdigit(argv[i][j]))
		{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
}
else
{
printf("0\n");
return (0);
}
printf("%d\n", sum);
return (0);
}
