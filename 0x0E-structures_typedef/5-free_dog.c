#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory used on structure
 * @d: pointer to structure
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d);
free(d->owner);
}
