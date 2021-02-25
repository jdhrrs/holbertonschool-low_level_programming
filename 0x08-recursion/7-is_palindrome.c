#include "holberton.h"

/**
 * _strlen_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
  if (*s == '\0')
    {
      return (0);
    }
  return (_strlen_recursion(s + 1) + 1);
}
/**
 * palindrome - Compares two strings
 * @s: Pointer to a character
 * @i: Integer i
 * @j: Integer j
 *
 * Return: An integer 0 or 1
 *
 */
int palindrome(char *s, int i, int j)
{
  if (i < j)
    {
      if (s[i] == s[j])
	return (palindrome(s, i + 1, j - 1));

      else if (s[i] != s[j])
	return (0);

      else
	return (1);
    }
  return (1);
}

/**
 * is_palindrome - Result of comparison
 * @s: Pointer to a character
 *
 * Return: An integer 0 or 1
 *
 *
 */
int is_palindrome(char *s)
{
  return (palindrome(s, 0, _strlen_recursion(s) - 1));
}
