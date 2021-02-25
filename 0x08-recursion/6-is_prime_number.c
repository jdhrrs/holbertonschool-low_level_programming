#include "holberton.h"
/**
 * _prime_number - Check for prime number
 * @n: number
 * @i: counter
 * Return: 1 if number is prime, otherwise 0
 */
int _prime_number(int n, int i)
{
  if (n < 2)
    {
      return (0);
    }
  if (i < n)
    {
      if (n % i == 0)
	{
	  return (0);
	}
      if (n / i < i)
	{
	  return (1);
	}
      return (_prime_number(n, i + 1));
    }
  return (1);
}
/**
 * is_prime_number - result if number is prime or not
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
  return (_prime_number(n, 2));
}
