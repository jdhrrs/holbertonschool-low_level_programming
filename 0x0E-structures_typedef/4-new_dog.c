#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copies the string
 * @dest: Destiny
 * @src: source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_info;

new_info = malloc(sizeof(dog_t));
if (new_info == NULL)
return (NULL);

(*new_info).name = malloc(sizeof(name) + 1);
if ((*new_info).name == NULL)
{
free(new_info);
return (NULL);
}

(*new_info).owner = malloc(sizeof(owner) + 1);
if ((*new_info).owner == NULL)
{
free((*new_info).name);
free(new_info);
return (NULL);
}

_strcpy((*new_info).name, name);
(*new_info).age = age;
_strcpy((*new_info).owner, owner);

return (new_info);
}

