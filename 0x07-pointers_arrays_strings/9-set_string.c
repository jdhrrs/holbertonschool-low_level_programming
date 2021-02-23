#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the pointer to the pointer
 * @to: the pointer
 *
 * Return: None
 */
void set_string(char **s, char *to)
{
  *s = to;
}
