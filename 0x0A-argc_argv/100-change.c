#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowest # of coins to make change with
 * @argc: # of arguments
 * @argv: array of arguments
 * Return: 1 if error or 0 if success
 */
int main(int argc, char *argv[])
{
int cents = atoi(argv[argc - 1]), quarter, dime;
int nickel, deuce, penny, total = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (cents > 0)
{
quarter = cents / 25;
dime = cents % 25 / 10;
nickel = cents % 25 % 10 / 5;
deuce = cents % 25 % 10 % 5 / 2;
penny = cents % 25 % 10 % 5 % 2 / 1;
total = quarter + dime + nickel + deuce + penny;
printf("%d\n", total);
}
else
{
printf("0\n");
}
return (0);
}
