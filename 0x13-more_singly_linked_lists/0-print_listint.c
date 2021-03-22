#include "lists.h"
/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h: nodes.
 * Return: elements.
 */
size_t print_listint(const listint_t *h)
{
int i;
const listint_t *nodo = h;
  
for (i = 0; nodo != NULL; i++)
{
printf("%d\n", nodo->n);
nodo = nodo->next;
}
return (i);
}
