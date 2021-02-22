#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
  int count = 0;
  int i = 0;
  int j = 0;

  while (s[1] != '\0')
    {
      while (accept[j] == s[i])
	{
	  if (accept[j] == s[i])
	    {
	      count++;
		}
	  j++;
	    }
      j= 0;
      i++;
	if (s[i] == ' ')
	{
	  break;
	}
    }
  return (count);
}
