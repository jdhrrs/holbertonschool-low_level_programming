#include "holberton.h"
/**
 * _sqrt - calculate the square root
 * @n: number
 * @x: number
 * Return: int
 */
int _sqrt(int n, int x)
{
  if (x * x > n)
    {
      return (-1);
    }
  if (x * x < n)
    {
      return (_sqrt(n, x + 1));
    }
  else if (x * x == n)
    {
      return (x);
    }
  return (0);
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
  return (_sqrt(n, 1));
}
