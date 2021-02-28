#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or mult
 */
int main(int argc, char *argv[])
{
int mult, i;

mult = 1;

if (argc > 2)
{
for (i = 1; i < argc; i++)
{
mult = mult *atoi(argv[i]);
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", mult);
return (0);
}
