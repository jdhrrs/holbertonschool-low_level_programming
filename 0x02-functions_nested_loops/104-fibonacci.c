#include <stdio.h>

/**
 * main - print first 98 sequences of fibo
 * Return: 0;
 */

int main(void)
{
	short int i;
	long h1, h2, h3, t1, t2, t3, limit;

	t1 = 1;
	t2 = 2;
	h1 = 0;
	h2 = 0;
	limit = 1000000;

	printf("%lu, %lu, ", t1, t2);
	for (i = 0; i < 96; i++)
	{
		h3 = h1 + h2;
		t3 = t1 + t2;
		if (t3 >= limit)
		{
			t3 = t3 % limit;
			h3++;
		}
		(h3 == 0) ? printf("%lu", t3) : printf("%lu%06lu", h3, t3);
		if (i != 95)
			printf(", ");
		h1 = h2;
		t1 = t2;
		h2 = h3;
		t2 = t3;
	}
	printf("\n");
	return (0);
}
