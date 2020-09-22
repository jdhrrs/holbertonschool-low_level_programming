#include <stdio.h>

/**
 * main - prints out all numbers under 10
 * without using any char variables
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
