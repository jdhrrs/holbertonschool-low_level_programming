#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar ('\n');
	return (0);
}
