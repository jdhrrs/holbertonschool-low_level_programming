#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: nodes
 * @head: first node
 * Return: New node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *aux = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
if (new)
{
new->n = n;
new->next = *head;
*head = new;
return (new);
}
while (aux->next != NULL)
{
aux = aux->next;
}
aux->next = new;
return (new);
}
