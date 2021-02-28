#include <stdio.h>
#include <stdlib.h>
/**
 * change - Count for number of coins
 * @n: number passed by user
 * Return: Count of coins
 */
int change(int n)
{
int s[] = {25, 10, 5, 2, 1};
int count, i;

i = 0;
count = 0;

while (n > 0)
{
if (n >= s[i])
{
n = n - s[i];
count++;
}
else
{
i++;
{
}
return (count);
}
/**
 * main - Function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if the program is correct
 * 1 if there's an error
 */

int main(int argc, char *argv[])
{
int n;

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[1]);

if (n < 0)
{
printf("0\n");
return (0);
}
printf("%d\n", change(n));
return (0);
}

