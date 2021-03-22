#include "lists.h"
/**
 * pop_listint - delete the head node.
 * @head: first element
 * Return: void.
 */
int pop_listint(listint_t **head)
{
  int f = 0;
  listint_t *aux_delete;

  if (*head != NULL)
    {
      aux_delete = *head;
      *head = aux_delete->next;
      f = aux_delete->n;
      free(aux_delete);
      return (f);
    }
  return (0);
}
