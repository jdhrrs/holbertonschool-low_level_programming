#include <stdio.h>

/**
 * main - prints sum of fibo numbers under 4,000,000
 * Return: 0
 */
int main(void)
{
	long f1, f2, next, sum;

	f1 = 1;
	f2 = 2;
	next = 3;
	sum = f2;

	while (next < 4000000)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		if ((f2 < 4000000) && (f2 % 2 == 0))
			sum += f2;
		/* printf("f1 = %lu, f2 = %lu, sum = %lu\n", f1, f2, sum); */
	}
	printf("%lu\n", sum);
	return (0);
}
