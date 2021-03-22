#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: nodes
 * Return: Elements.
 */

size_t listint_len(const listint_t *h)
{
int i;
const listint_t *nodo = h;

for (i = 0; nodo != NULL; i++)
{
nodo = nodo->next;
}
return (i);
}
